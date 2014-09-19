#include <map>
#include <set>
#include <cmath>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
	int t;
	cin >> t;
	while(t){
		int sum=0;
		for(int i=1;i<=t;i++)
			sum+= i*i;
		cout << sum << endl;
		cin >> t;
	}
	return 0;
}
