#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--){
		int a;
		cin >> a;
		cout << ((long)(a/2)*(a-(long)(a/2))) << endl;
	}
	return 0;
}

