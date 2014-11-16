#include<iostream>
#include<stack>
#include<cstdlib>
using namespace std;
int main(){
	int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		int a[n],b[n];
		for(int i=0;i<n;i++)
			cin >> a[i];
		k++;
		for(int i=0;i<n;i++)
			b[i]=a[i]%k;
		if(n==2){
			cout << "YES\n";
			continue;
		}
		int x=b[0],p=0,q=0;
		int y=b[1];
		for(int i=0;i<n;i++){
			if(x==b[i])
				p++;
			if(y==b[i])
				q++;
		}
		if(p==n-1 || q==n-1 || p==n)
			cout << "YES\n";
		else
			cout << "NO\n";
	}
	return 0;
}
