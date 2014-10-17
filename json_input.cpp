#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<map>

using namespace std;

int main(){
	int n=2;
	map<string,string> mp;
	map<string,string>::iterator it;
	while(n--){
		string s;
		cin >> s;
		int i=1,j=1;
		while(j<s.size() && i<s.size()){
			while(s[i]!=':')
				i++;
			string t1=s.substr(j+1,i-j-2);
			j=i;
			while(s[i]!=',' && s[i]!='}')
				i++;
			if(s[i]==',' && s[i+1]!='"'){
				i++;
				while(s[i]!=',' && s[i]!='}')
					i++;
			}
			string t2=s.substr(j+1,i-j-1);
			if(n==0){
				it=mp.find(t1);
				if((*it).second!=t2)
					cout << (*it).first << ":";
			}
			else
				mp[t1]=t2;
			j=i+1;
			i=i+1;
		}
	}
	cout << "\b " << endl;
	return 0;
}
