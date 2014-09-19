#include<iostream>
#include<stack>
using namespace std;
int order(char op){
	switch(op){
		case '+':return 1;
		case '-':return 1;
		case '*':return 2;
		case '/':return 2;
		case '^':return 3;
		
		default: return 0;
	}
}
bool ishigher(char a, char b){
	if(order(a)>=order(b))
		return true;
	else
		return false;
}
string rpn(string s){
	string res="";
	stack <char> st;
	int len=s.size();
	for(int i=0;i<len;i++){
		if(s[i]<='z' && s[i]>='a')
			res=res+s[i];
		else{
			if(st.empty())
					st.push(s[i]);
			else if(!st.empty()){
				if(s[i]=='(')
					st.push(s[i]);
				else if(s[i]==')'){
					while(st.top()!='('){
						res=res+st.top();
						st.pop();
					}
					st.pop();
				}
				else if(s[i]=='+' || s[i]=='-' || s[i]=='*' || s[i]=='/' || s[i]=='^'){
					while(!st.empty() && ishigher(st.top(),s[i])){
						res=res+st.top();
						st.pop();
					}
					if(!ishigher(st.top(),s[i]))
						st.push(s[i]);
				}
			}
		}
	}
	while(!st.empty()){
		res=res+st.top();
		st.pop();
	}
	return res;
}
int main(){
	int n;
	cin >> n;
	while(n--){
		string s;
		cin >> s;
		string out=rpn(s);
		cout << out <<endl;
	}
	return 0;
}
