#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n,k,t;
	cin >> n >> k >> t;
	int arr[n];
	int aux[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	for(int i=0;i<n;i++)
		aux[(i+k)%n]=arr[i];
	while(t--){
		int a;
		cin >> a;
		cout << aux[a] << endl;
	}
	return 0;
}

