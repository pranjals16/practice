#include <cmath>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#define ll long long
using namespace std;
int max( long long int a, long long int b ) { return ( a > b )? a : b; }
int main(){
	ll k,n;
	cin >> k >> n;
	ll v[n],wt[n];
	for(ll i=0;i<n;i++)
		cin >> wt[i] >> v[i];
	ll knap[n+1][k+1];
	for(ll i=0;i<=n;i++){
		for(ll w=0;w<=k;w++){
			if(i==0 || w==0)
				knap[i][w]=0;
			else if(wt[i-1]<=w)
				knap[i][w]=max(v[i-1]+knap[i-1][w-wt[i-1]],knap[i-1][w]);
			else
				knap[i][w]=knap[i-1][w];
		}
	}
	cout << knap[n][k] << endl;
	return 0;
}
