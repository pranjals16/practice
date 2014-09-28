#include<cstdio>
#include<cmath>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
string s;
int dp[30][300];
int len;
int solve(int pos, int prev){
	if(pos==len)
		return 1;
	if(dp[pos][prev]!=-1)
		return dp[pos][prev];
	dp[pos][prev]=0;
	int sum=0;
	int c=0;
	for(int i=pos;i<len;i++){
		sum+=s[i]-'0';
		if(sum>=prev)
			c+=solve(i+1,sum);
	}
	return(dp[pos][prev]=c);
}
int main(){
		cin >> s;
		int t=1;
		while(s!="bye"){
			len=s.size();
			for(int i=0;i<30;i++)
				memset(dp[i],-1,sizeof dp[i]);
			cout << t++ << ". " << solve(0,0) << endl;
			cin >> s; 
		}
}
