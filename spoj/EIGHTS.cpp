#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
	long long t,n;
	cin >> t;
	while(t--){
		cin >> n;
		long long temp=192+(n-1)*250;
		cout << temp << endl;
	}
	return 0;
}
