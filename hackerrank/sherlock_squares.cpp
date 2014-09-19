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
		int a,b;
		cin >> a >> b;
		int i=sqrt(a);
		int j= sqrt(b);
		int count=0;
		while(i<=j){
			if(i*i <=b && i*i>=a)
				count++;
			i++;
		}
		cout << count << endl;
	}
	return 0;
}

