#include<iostream>
#include<map>
#include<string>
#include<cstdio>
#include<cstring>

using namespace std;

const char table[10][5]={" ","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

pair<int,int> find(char a){
	pair<int,int> p;
	for(int i=0;i<10;i++){
		for(int j=0;j<strlen(table[i]);j++){
			if(table[i][j]==a){
				p=make_pair(i,j+1);
				return p;
			}
		}
	}
}
int main(){
	int t,iter=1;
	pair<int,int> p;
	cin >> t;
	cin.ignore();
	while(t--){
		string s;
		getline(cin,s);
		int n=s.size();
		int prev=0;
		cout << "Case #" << iter++ << ": ";
		for(int i=0;i<n;i++){
			if(s[i]!=32){
				p=find(s[i]);
				if(p.first==prev)
					cout << " ";
				for(int k=0;k<p.second;k++)
					cout << p.first;
				prev=p.first;
			}
			else if(s[i]==32){
				if(prev==0)
					cout << " ";
				cout << "0";
				prev=0;
			}
		}
		cout << endl;
		//cout << "Case #" << iter++ << ": ";
	}
	return 0;
}
