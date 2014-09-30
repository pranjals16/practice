#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
	int t,n,iter=1;
	cin >> t;
	while(t--){
		cin >> n;
		int f[n+1];
		f[0]=1;
		f[1]=1;
		f[2]=5;
		f[3]=11;
		for(int i=4;i<=n;i++)
			f[i]=f[i-1]+5*f[i-2]+f[i-3]-f[i-4];
		cout << iter++ << " " << f[n] << endl;
	}
	return 0;
}
