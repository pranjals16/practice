#include<iostream>
#include<stack>
#include<cstdlib>
#include<cstring>
using namespace std;
int arr[101];
int dp[101][101];
int csum(int a, int b){
	int sum=0;
	for(int i=a;i<=b;i++){
		sum+=arr[i];
		sum%=100;
	}
	return sum;
}
int solve(int a, int b){
	if(dp[a][b]!=-1)
		return dp[a][b];
	if(a==b)
		return 0;
	int ret=dp[a][b];
	for(int k=a;k<b;k++){
		int temp=solve(a,k)+solve(k+1,b)+csum(a,k)*csum(k+1,b);
		if(ret==-1 || temp< ret)
			ret=temp;
	}
	dp[a][b]=ret;
	return dp[a][b];
}
int main(){
	int n;
	while(cin >> n){
		for(int i=1;i<=n;i++)
			cin >> arr[i];
		memset(dp,-1,sizeof(dp));
		cout << solve(1,n) << endl;
	}
	return 0;
}
