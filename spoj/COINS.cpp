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
ll A[1000000];
ll solve(ll n){
	if(n<1000000){
		if(A[n]!=0)
			return A[n];
	}
	if(n<n/2+n/3+n/4)
		return(solve(n/2)+solve(n/3)+solve(n/4));
	else{
		if(n<1000000)
			A[n]=n;
		return n;
	}
}

int main(){
	ll n;
	for(ll i=0;i<1000000;i++)
		A[i]=solve(i);
	while(cin >> n){
		cout << solve(n) << endl;
	}
	return 0;
}
