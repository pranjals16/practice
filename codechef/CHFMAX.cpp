#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		n=s.size();
		int count[26]={0};
		for(int i=0;i<n;i++)
			count[s[i]-'a']++;
		int maxc=0,idx=0;
		for(int i=0;i<26;i++){
			if(count[i]>maxc){
				maxc=count[i];
				idx=i;
			}
		}
		char c='a'+idx;
		for(int i=0;i<n;i++){
			if(s[i]==c)
				cout << "?";
			else
				cout << s[i];
		}
		cout << endl;
	}
	return 0;
}
