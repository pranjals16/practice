#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct data{
	int st;
	int ed;
	int pr;
};
bool comp(const data &a,const data &b){
	return (a.st==b.st)?a.ed < b.ed : a.st < b.st;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		data d[n];
		for(int i=0;i<n;i++)
			cin >> d[i].st >> d[i].ed >> d[i].pr;

		sort(d,d+n,comp);
		vector<int>dp(n,0);
		dp[0]=d[0].pr;
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				if(d[i].st>=d[j].ed && dp[j]+d[i].pr>dp[i])
					dp[i]=dp[j]+d[i].pr;
			}
			dp[i]=max(dp[i],d[i].pr);
		}
		int max=dp[0];
		for(int i=1;i<n;i++)
			if(dp[i]>max)
				max=dp[i];
		cout << max << endl;
	}	
	return 0;
}
