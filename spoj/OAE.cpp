#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;
#define MOD 314159

int even[1000001], odd[1000001];
int main() {
	odd[1]=1;
	even[1]=9;
	for(int i=2;i<1000001;i++){
		odd[i]= (((odd[i-1]*9)%MOD)+even[i-1])%MOD;
		even[i]=(((even[i-1]*9)%MOD)+odd[i-1])%MOD;
	}
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << even[n] << endl;
	}
	return 0;

}
