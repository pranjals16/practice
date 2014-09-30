#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include <cmath>
#define ll long long
using namespace std;

int main(){
	ll t,n,a;
	cin >> t;
	while(t--){
		cin >> n;
		ll sum=0;
		if(n==0){
			cout << "YES\n";
			break;
		}
		for(int i=0;i<n;i++){
			cin >> a;
			sum+=a;
		}
		if(sum%n==0)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
