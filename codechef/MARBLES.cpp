#include<iostream>
#include<stack>
#include<cstdlib>
#include<cstring>
#include<cstdio>
using namespace std;
long long int solve(int n, int k){
	if(k>n-k)
		k=n-k;
	long long int ans=1;
	for(int i=0;i<k;i++)
		ans=ans*(n-i)/(i+1);
	return ans;		
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int k,n;
		cin >> n >> k;
		cout << solve(n-1,k-1) << endl;
	}
	return 0;
}
