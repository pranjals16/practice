#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<stack>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	int state=0;
	while(s!=""){
		int n=s.size();
		int i=0,sp_count=0;
		while(s[sp_count]==32)
			sp_count++;
		bool flag=false,flag1=false;
		while(i<n){
			if(s[i]=='/' && (i+1)<n && s[i+1]=='/'){
				int k=i-1;
				while(k>=0 && s[k]==32)
					k--;
				sp_count=i-k-1;
				state=1;
				if(s[k]==';')
					flag=true;
				break;
			}
			else if(s[i]=='/' && (i+1)<n && s[i+1]=='*'){
				state=2;
				i+=2;
			}
			else if(s[i]=='*' && (i+1)<n && s[i+1]=='/'){
				state=0;
				i+=2;
				flag1=true;
			}
			if(state!=2 && i<n)
				cout << s[i++];
			else
				i++;
		}
		
		if(state==0 ){
			if(flag1==false)
				cout << "\n";
			else{
				while(sp_count--)
					cout << "\b";
			}
		}
		
		else if(state==1){
			state=0;
			while(sp_count--)
				cout << "\b";
			if(flag){
				flag=false;
				cout << endl;
			}
		}
		getline(cin,s);
	}
	return 0;
}
