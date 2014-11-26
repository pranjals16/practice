#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t,n,sum;
	cin >> t;
	while(t--){
		cin >> n >> sum;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		bool dp[sum+1][n+1];
		for(int i=0;i<=n;i++)
			dp[0][i]=true;
		for(int i=1;i<=sum;i++)
			dp[i][0]=false;
		for(int i=1;i<=sum;i++){
			for(int j=1;j<=n;j++){
				dp[i][j]=dp[i][j-1];
				if(arr[j-1]<=i)
					dp[i][j]=dp[i][j] || dp[i-arr[j-1]][j-1];
			}
		}
		if(dp[sum][n])
			cout << "Yes\n";
		else
			cout << "No\n";
	}
	return 0;
}
