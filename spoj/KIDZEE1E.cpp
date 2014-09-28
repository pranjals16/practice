#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int main(){
	int t,iter=1;
	cin >> t;
	while(t--){
		int arr[3];
		for(int i=0;i<3;i++)
			cin >> arr[i];
		sort(arr,arr+3);
		cout << "Case " << iter++ <<": ";
		for(int i=0;i<3;i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	return 0;
}
