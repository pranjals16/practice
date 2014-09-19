#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n;
	cin >> n;
	int a[n];
	for(int i=0;i<n;i++)
		cin >> a[i];
	sort(a,a+n);
	int tmp;
	int index=0;
	while(1){
		int count=0;
		tmp=a[index];
		for(int i=index;i<n;i++){
			a[i]=a[i]-tmp;
			count++;
		}
		cout << count << endl;
		while(a[index]==0)
			index++;
		if(index==n)
			break;
	}
	return 0;
}

