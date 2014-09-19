#include<iostream>
#include<string>
#include<cstdio>
#include<map>
#include<set>
using namespace std;
bool isPal(string s,int st,int ed){
	int j=ed;
	int i=st;
	while(i<=j){
		if(s[i]!=s[j])
			return false;
		i++;
		j--;
	}
	return true;
}
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		string s;
		cin >> s;
		int j=s.size()-1;
		int i=0;
		while(i<j){
			if(s[i]==s[j]){
				i++;j--;
			}
			else
				break;
		}
		if(i==j){
			cout << "-1"<<endl;
			return 0;
		}
		if(isPal(s,i,j-1))
			cout << j << endl;
		else if(isPal(s,i+1,j))
			cout << i << endl;
	}
	return 0;
}
