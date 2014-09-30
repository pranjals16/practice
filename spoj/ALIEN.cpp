#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <vector>
using namespace std;

int main(){
	int t,n,W;
	cin >> t;
	while(t--){
		cin >> n >> W;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		int dp[n+1];
		dp[0]=0;
		for(int i=1;i<=n;i++){
			if(dp[i-1]+arr[i-1] <= W)
				dp[i]=dp[i-1]+arr[i-1];
			else if(dp[i-1] <= W)
				dp[i]=dp[i-1];
			else
				dp[i]=0;
		}
		int max=0,index=0;
		for(int i=0;i<=n;i++){
			if(dp[i]>max && dp[i]<=W){
				max=dp[i];
				index = i;
			}
		}
		cout << max << " " << index << endl;
	}
	return 0;
}
