#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int val;
	cin >> val;
	int n;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	for(int i=0;i<n;i++){
	   if(arr[i]==val){
		  cout << i << endl;
		  return 0;
	   }
	}
	return 0;
}

