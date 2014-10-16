#include<iostream>
#include<set>
#include<bitset>
#include<cstdio>
using namespace std;

int main(){
	long long int n,i;
	cin >> n;
	long long int f[n+1],g[n+1],h[n+1];
	if(n==0)
		cout << "1\n";
	else{
		f[1]=1;
		g[1]=1;
		h[1]=1;
		for(i=2;i<=n;i++){
			f[i]=f[i-1]+g[i-1];
			g[i]=f[i-1]+g[i-1]+h[i-1];
			h[i]=g[i-1]+h[i-1];
		}
		cout << f[n]+g[n]+h[n] << endl;
	}
	return 0;
}
