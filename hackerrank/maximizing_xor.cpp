#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int l,r;
	cin >> l >> r;
	int res=0;
	for(int i=l;i<=r;i++){
		for(int j=i;j<=r;j++){
			int temp=i^j;
			if(temp > res)
				res=temp;
		}
	}
	cout << res << endl;
	return 0;
}

