#include<iostream>
#define ll long long
using namespace std;
int count(int dp[13][100],int n, int k){
	if(n==0)
		return 0;
	if(k==0)
		return 1;
	if(dp[n][k]!=-1)
		return dp[n][k];
	int val=0;
	for(int i=0;i<n && k-1 >=0;i++)
		val+=count(dp,n-1,k-i);
	return(dp[n][k]=val);
	
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,k;
		int dp[13][100];
		for(int i=0;i<=12;i++)
			for(int j=0;j<=99;j++)
				dp[i][j]=-1;
		cin >> n >> k;
		cout << count(dp,n,k) << endl;		
	}
	return 0;
}
