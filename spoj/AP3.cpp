#include <cmath>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

typedef unsigned long long int bigint;

int main(){
	int t;
	cin >> t;
	while(t--){
		bigint x,y,z;
		cin >> x >> y >> z;
		bigint a=x+y,b=7*x+5*y+2*z,c=12*z;
		bigint n=(b+sqrt(b*b-4*a*c))/(2*a);
		bigint d=(y-x)/(n-6);
		bigint A=x-2*d;
		cout << n << endl;
		for(bigint i=0;i<n;i++)
			cout << A+i*d << " ";
		cout << endl;
	}
	return 0;
}
