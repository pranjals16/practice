#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;
#define MOD 1000000007
long long dp[110][110];

void find(int m, int n){
	long long temp=1;
	for(int i=2;i<=m;i++){
		for(int j=i;j<=n;j++){
			dp[i][j]=(dp[i-1][j-1]+dp[i][j-1]*i)%MOD;
		}
		temp=(temp*i)%MOD;
	}
	cout << (temp*dp[m][n])%MOD << endl;
}

int main(){
	int t,m,n,iter=1;
	cin >> t;
	for(int i=1;i<110;i++)
		dp[1][i]=1;
	
	while(t--){
		cin >> m >> n;
		cout << "Case #" << iter++ << ": ";
		find(m,n);
	}
	return 0;
}
