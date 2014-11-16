#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main(){
	string s;
	cin >> s;
	int n=s.size();
	int i=0,count=0;
	char temp=s[0];
	while(i<n){
		while(s[i]==temp){
			count++;
			i++;
		}
		cout << temp << count;
		count=0;
		temp=s[i];
	}
	cout << endl;
	return 0;
}
