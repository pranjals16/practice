#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<stack>
#include<cctype>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	int n=s.size();
	stack<char> st;
	int i=0;
	while(i<n){
		if(s[i]=='(' || s[i]=='{' || s[i]=='[')
			st.push(s[i]);
		else if(s[i]==')' || s[i]=='}' || s[i]==']'){
			char temp=st.top();
			st.pop();
			if(s[i]==')' && temp!='('){
				cout << "0\n";
				return 0;
			}
			else if(s[i]=='}' && temp!='{'){
				cout << "0\n";
				return 0;
			}
			if(s[i]==']' && temp!='['){
				cout << "0\n";
				return 0;
			}
		}
		i++;
	}
	if(!st.empty())
		cout << "0\n";
	else
		cout << "1\n" ;
	return 0;
}
