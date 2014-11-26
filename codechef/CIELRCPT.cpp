#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t;
	cin >> t;
	while(t--){
		int n,count=0,fact=0;
		cin >> n;
		if(n>=4096){
			fact=n/2048;
			n%=2048;
		}
		for(int i=0;i<=12;i++){
			if(n & (1<<i))
				count++;
		}
		cout << count+fact << endl;
	}
	return 0;
}
