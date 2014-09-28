#include<iostream>
#include<cstdio>
#include<algorithm>
#include<math.h>
using namespace std;
#define ll long long
int main(){
	int t;
	cin >> t;
	int iter=1;
	while(t--){
		long long r;
		cin >> r;
		double res= double(4*r*r)+0.25;
		cout << "Case "<< iter++ << ": " << res << endl;
	}
 
}
