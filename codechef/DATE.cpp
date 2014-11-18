#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<vector>
using namespace std;
void find(string s){
	int n=s.size();
	int date=0,i=0,month=0,year=0;
	while(s[i]!='/'){
		date=10*date+(s[i]-'0');
		i++;
	}
	i++;
	while(s[i]!='/'){
		month=10*month+(s[i]-'0');
		i++;
	}
	i++;
	while(s[i]!='\0'){
		year=10*year+(s[i]-'0');
		i++;
	}
	if(date<1 || date >31 || month<1 || month>12 || year > 3000){
		cout << "Invalid Date\n";
		return;
	}
	date=date+1;
	if(date<29){
		if(month < 10)
			cout << date << "/0" << month << "/" << year << endl;
		else
			cout << date << "/" << month << "/" << year << endl;
		return;
	}
	else{
		if(year%4==0){
			if(month==2)
		}
	}
}
int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		find(s);
	}
	return 0;
}
