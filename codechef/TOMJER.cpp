#include<iostream>
#include<cstdio>
#include<string>
#include<cmath>
#include<vector>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int res=1;
		for(int i=0;i<n-1;i++){
			res=(res*2)%1000;
		}
		cout << res << endl;
	}
	return 0;
}
