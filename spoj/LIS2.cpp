#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;

int main(){
	int n,a,b;
	cin >> n;
	vector<pair<int,int> > arr;
	for(int i=0;i<n;i++){
		cin >> a >> b;
		arr.push_back(make_pair(a,b));
	}
	
	vector<int> dp(n,1);
	int max=0;
	for(int i=1;i<n;i++){
		for(int j=0;j<i;j++){
			if((arr[i].first>arr[j].first && arr[i].second > arr[j].second) && dp[i]<dp[j]+1)
				dp[i]=dp[j]+1;
		}
	}
	for(int i=0;i<n;i++)
		if(max<dp[i])
			max=dp[i];
	cout << max << endl;
	return 0;
}
