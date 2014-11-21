#include<iostream>
#include<cstdio>
#include<string>
#include<climits>
#include<algorithm>

using namespace std;

int main(){
	int n,k;
	cin >> n >> k;
	int dp[n+1][k+1];
	for(int i=1;i<=n;i++){
		dp[i][0]=0;
		dp[i][1]=1;
	}
	for(int j=1;j<=k;j++)
		dp[1][j]=j;
	int res;
	for(int i=2;i<=n;i++){
		for(int j=2;j<=k;j++){
			dp[i][j]=INT_MAX;
			for(int x=1;x<=j;x++){
				res=1+max(dp[i-1][x-1],dp[i][j-x]);
				if(res<dp[i][j])
					dp[i][j]=res;
			}
		}
	}
	cout << dp[n][k] << endl;
	return 0;
}
