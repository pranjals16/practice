#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<stack>
#include<cstdlib>
using namespace std;

int main(){
	string s;
	int state=0; // 1:+  2: -  3:*  4:/
	stack<string> st;
	bool elem=false;
	while(getline(cin,s)){
		if(s.find("expr")!=string::npos){
			st.push("{");
			continue;
		}
		else if(s.find("sum")!=string::npos){
			st.push("{");
			state=1;
			continue;
		}
		else if(s.find("prod")!=string::npos){
			st.push("{");
			state=2;
			continue;
		}
		else if(s.find("elem")!=string::npos){
			st.push("[");
			elem=true;
			continue;
		}
		else if(s.find("]")!=string::npos){
			elem=false;
			int temp=0;
			if(state==1){
				while(st.top()!="["){
					temp+=atoi(st.top().c_str());
					st.pop();
				}
			}
			else if(state==2){
				temp=1;
				while(st.top()!="["){
					temp*=atoi(st.top().c_str());
					st.pop();
				}
			}
			cout << temp << endl;
			state=0;
			continue;
		}
		else if(elem==true){
			int i=0,x=0;
			while(s[i]!='\"')
				i++;
			i++;
			x=i;
			while(s[i]!='\"')
				i++;
			cout << s.substr(x,i-x) << endl;
			st.push(s.substr(x,i-x));
		}
		
	}
	return 0;
}
