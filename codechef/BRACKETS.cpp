#include<iostream>
#include<map>
#include<cstdlib>
#include<cstring>
#include<cstdio>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size();
		int bal=0,maxbal=0;
		for(int i=0;i<n;i++){
			if(s[i]=='(')
				bal+=1;
			if(s[i]==')')
				bal-=1;
			maxbal=max(maxbal,bal);
		}
		int temp=maxbal;
		while(temp--)
			cout << "(";
		temp=maxbal;
		while(temp--)
			cout << ")";
		cout << endl;
	}
	return 0;
}
