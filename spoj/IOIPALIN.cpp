#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
const int MAX=6105;
int dp[MAX][MAX];
int main(){
	int n;
	cin >> n;
	string s;
	cin >> s;
	for(int i=0;i<n;i++){
		dp[i][i]=0;
		if(i)
			dp[i][i-1]=0;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<n-i+1;j++){
			int k=j+i-1;
			if(s[j]==s[k]) 
				dp[j][k]=dp[j+1][k-1];
			else
				dp[j][k]=min(dp[j+1][k],dp[j][k-1])+1;	
		}
	}
	cout << dp[0][n-1] << endl;
	return 0;
}
