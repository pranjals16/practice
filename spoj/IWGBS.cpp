#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <string>
#include <map>
#include <vector>
#define ll long long
using namespace std;

int main(){
	ll n;
	cin >> n;
	ll arr[n+1][2];
	arr[0][0]=0;
	arr[0][1]=0;
	arr[1][0]=1;
	arr[1][1]=1;
	for(ll i=2;i<=n;i++){
		arr[i][0]=arr[i-1][1];
		arr[i][1]=arr[i-1][0]+arr[i-1][1];
	}
	cout << arr[n][0]+arr[n][1] << endl;
	return 0;
}
