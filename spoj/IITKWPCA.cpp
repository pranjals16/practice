#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;

int main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int i;
		string s;
		getline(cin,s);
		int n=s.size();
		map<string,int> res;
		for(i=0;i<n;i++){
			string temp="";
			int j=i;
			while(s[j]!=32 && j<n)
				j++;
			for(int k=j-1;k>=i;k--)
				temp.push_back(s[k]);
			while(s[j]==32 && j<n)
				j++;
			//cout << j << endl;
			res[temp]+=1;
			i=j-1;
		}
		//for(map<string,int>::iterator it=res.begin(); it!=res.end();it++)
		//	cout << (*it).first << "-----" <<(*it).second << endl;
		cout << res.size() << endl;
	}
	return 0;
}
