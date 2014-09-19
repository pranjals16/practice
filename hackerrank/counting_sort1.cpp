#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	long long n;
	cin >> n;
	int arr[100];
	for(int i=0;i<100;i++)
		arr[i]=0;
	for (long long i=0;i<n;i++){
		long long a;
		cin >> a;
		arr[a]++;
	}
	for(int i=0;i<100;i++)
		cout << arr[i] << " ";
	cout << endl;
	return 0;
}

