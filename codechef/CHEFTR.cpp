#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	long long int t,n,k;
	cin >> t;
	while(t--){
		cin >> n >> k;
		long long temp=(n*(n-1)*(n-2)/6)-(k*(k-1)*(k-2)/6);
		cout << temp << endl;
	}
	return 0;
}
