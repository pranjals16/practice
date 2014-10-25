#include<iostream>
#include<string>
#include<map>
#include<cctype>
using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	char c1[255]={0},c2[255]={0};
	int n1,n2;
	n1=a.size();
	n2=b.size();
	for(int i=0;i<n1;i++){
		if(isalpha(a[i]))
			c1[tolower(a[i])]++;
		else if(isdigit(a[i]))
			c1[a[i]]++;
	}
	for(int i=0;i<n2;i++){
		if(isalpha(b[i]))
			c2[tolower(b[i])]++;
		else if(isdigit(b[i]))
			c2[b[i]]++;
	}
	for(int i=0;i<255;i++){
		if(c1[i]!=c2[i]){
			cout << "Not Anagram\n";
			return 0;
		}
	}
	cout << "Anagram\n";
	return 0;
}
