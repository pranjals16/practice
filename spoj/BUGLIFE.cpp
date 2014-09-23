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
	while(t--){
		int m,n;
		cin >> m >> n;
		vector<int> arr(m,-1);
		while(n--){
			int a,b;
			cin >> a >> b;
			arr[a]=b;
		}
	}
	return 0;
}
