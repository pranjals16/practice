#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<stack>

using namespace std;

int main(){
	string s;
	getline(cin,s);
	int n=s.size();
	int i=0;
	while(i<n){
		if(s[i]=='{')
			cout << s[i++] << "\n\n";
		else if(s[i]=='}' && i!=n-1){
			cout << "\n\n" << s[i++] << ",\n\n";
			i++;
		}
		else if(s[i]=='}' && i==n-1)
			cout << "\n\n" << s[i++] << endl;
		else
			cout << s[i++];
			
		
	}
	cout << s << endl;
	return 0;
}
