#include<iostream>
#include<string>
#include<ctype.h>
#include<cstdio>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	int n= s.size();
	for(int i=0;i<n;i++){
		int start=i;
		while(s[i]!=32 && i<n)
			i++;
		bool flag=false;
		for(int j=i-1;j>=start;j--){
			if((s[i-1]>=97 && s[i-1]<=122) && !flag)
				putchar( toupper(s[j]));
			else
				cout << s[j];
			flag=true;
		}
		cout << " ";
	}
	cout << endl;
	return 0;
}
