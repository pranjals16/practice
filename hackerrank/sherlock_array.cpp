#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n==1){
			cout << "YES" <<endl;
			cin >> n;
			continue;
		}
		if(n==2){
			int a,b;
			cin >> a >> b;
			cout << "NO" <<endl;
			continue;
		}
		int arr[n],aux[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		aux[0]=arr[0];
		for(int i=1;i<n;i++)
			aux[i]=aux[i-1]+arr[i];
		bool flag=false;
		for(int i=1;i<n-1;i++){
			if(aux[i-1]==(aux[n-1]-aux[i])){
				flag=true;
				cout << "YES" <<endl;
				break;
			}
		}
		if(!flag)
			cout << "NO" << endl;
	}
	return 0;
}

