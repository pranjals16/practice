#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<stack>

using namespace std;

int main(){
	string s;
	int state=0; // 1:+  2: -  3:*  4:/
	stack<int> st;
	while(1){
		cin >> s;
		if(s=="<expr>")
			continue;
		else if(s=="</expr>")
			break;
		else if(s=="<sum>"){
			state=1;
			continue;
		}
		else if(s=="</sum>"){
			state=0;
			int temp=0;
			while(!st.empty()){
				temp+=st.top();
				st.pop();
			}
			cout << temp << endl;
			continue;
		}
		else{
			st.push(s[6]-'0');
			continue;
		}
		cout << s << endl;
	}
	return 0;
}
