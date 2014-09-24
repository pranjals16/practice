#include<iostream>
#include<algorithm>
#include <stdio.h>
using namespace std;
int gcd ( int a, int b )
{
	int c;
	while ( a != 0 ) {
		c = a; 
		a = b%a;  
		b = c;
	}
	return b;
}
int main()
{
	int t;
	cin >> t;
	while(t--){
		int a,b;
		cin >> a >> b;
		int y=gcd(a,b);
		cout << b/y << " " << a/y << endl;
	}
	return 0;
}
