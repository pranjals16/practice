#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;
int dp[2003][2003];
int cuts[2003];
int mincut(string s,int n){
	memset(dp,0,sizeof(dp));
	cuts[n]=-1;
	for(int i=n-1;i>=0;i--){
		cuts[i]=n-i;
		for(int j=i;j<n;j++){
			if( (s[i]==s[j]) && ( (j-i)<2 || (dp[i+1][j-1]==1)) ){
				dp[i][j]=1;
				cuts[i]=min(cuts[i],1+cuts[j+1]);
			}
		}
	}
	return cuts[0]+1;;
}

int main(){
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size();
		cout << mincut(s,n) << endl;
	}
	return 0;
}
