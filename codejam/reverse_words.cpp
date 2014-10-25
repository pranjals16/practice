#include<iostream>
#include<stack>
#include<string>
#include<cstdio>

using namespace std;

int main(){
	int n,iter=1;
	cin >> n;
	cin.ignore();
	while(n--){
		string s,temp;
		getline(cin,s);
		int size=s.size();
		stack<string> st;
		int start;
		for(int i=0;i<size;i++){
			start=i;
			while(s[i]!=32 && i<size)
				i++;
			temp=s.substr(start,i-start);
			st.push(temp);
		}
		cout << "Case #" << iter++ << ": ";
		while(!st.empty()){
			cout << st.top() << " ";
			st.pop();
		}
		cout << endl;
	}
	return 0;
}
