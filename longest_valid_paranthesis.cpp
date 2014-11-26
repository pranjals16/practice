#include <iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int main() {
	string s;
	cin >> s;
	int n=s.size();
	stack<pair<char,int> > st;
	int maxlen=0,t=0;
	for(int i=0;i<n;i++){
		if(s[i]=='(')
			st.push(make_pair(s[i],i));
		else{
			if(st.empty())
				t=i+1;
			if(!st.empty()){
				pair<char,int> tmp=st.top();
				st.pop();
				if(tmp.first=='('){
					if(!st.empty())
						maxlen=max(maxlen,i-st.top().second);
					else
						maxlen=max(maxlen,i-t+1);
				}
			}
		}
	}
	cout << maxlen << endl;
	return 0;	
}
