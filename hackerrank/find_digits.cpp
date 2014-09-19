#include <cmath>
#include <set>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int num=n;
		int count=0;
		while(n){
			int d=n%10;
			if(d==0)
				n=n/10;
			else{
				if(num%d==0){
					count++;
					n=n/10;
				}
				else
					n=n/10;
			}
		}
		cout << count << endl;
	}
	return 0;
}

