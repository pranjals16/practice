#include <iostream>

#define MAXN 100

using namespace std;

int arr[MAXN];

int gcd(int a, int b) {
	while(b != 0) {
		int t = b; 
		b = a % b; 
		a = t;
	}
	return a;
}

int main() {
	int t; 
	cin >> t;
	while(t--) {
		int n; 
		cin >> n;
		int g; 
		cin >> g; 
		for(int i = 1; i < n; i++) {
	 		int a; 
	 		cin >> a;
	 		g = gcd(g, a);
		}
		cout << (g > 1 ? "NO" : "YES") << endl;
	}
	return 0;
}
