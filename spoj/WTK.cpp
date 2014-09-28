#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;
int find(int n,int k){
	if(n==1)
		return 1;
	else
		return (find(n-1,k+1)+k-1)%n + 1;
}
int main() {
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		cout << find(n,1) << endl;
	}
	return 0;

}
