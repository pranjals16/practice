#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int find_length(int arr[],int n){
	int maxe=2;
	int dp[n][n];
	for(int i=0;i<n;i++)
		dp[i][n-1]=2;
	for(int i=n-2;i>=0;i--){
		int j=i-1,k=i+1;
		while(j>=0 && k<=n-1){
			if(arr[j]+arr[k]<2*arr[i])
				k++;
			else if(arr[j]+arr[k]>2*arr[i]){
				dp[j][i]=2;
				j--;
			}
			else{
				dp[j][i]=dp[i][k]+1;
				maxe=max(maxe,dp[j][i]);
				j--;
				k++;
			}
		}
		while(j>=0){
				dp[j][i]=2;
				j--;
		}
	}
	return maxe;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		cout << find_length(arr,n) << endl;
	}
	return 0;
}
