#include <cmath>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;
int main(){
	while(1){
		string s;
		getline(cin,s);
		if(s[0]=='*')
			break;
		int n=s.size();
		bool flag=true;
		char ch=tolower(s[0]);
		for(int i=1;i<n;i++){
			while(s[i]!=32 && s[i]!='\0')
				i++;
			while(s[i]==32)
				i++;
			if(tolower(s[i])!=ch && s[i]!='\0')
				flag=false;
//			cout << s[i+1] << endl;
		}
		if(flag)
			cout << "Y\n";
		else
			cout << "N\n";
		//cout << s[27] << endl;
	}
	return 0;
}
