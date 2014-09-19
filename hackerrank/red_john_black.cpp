#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;
	vector<int> r(41,0);
	r[0]=1;
	r[1]=1;
	r[2]=1;
	r[3]=1;
	for(int i=4;i<41;i++)
		r[i]=r[i-1]+r[i-4];
	vector <bool> P(220000,1);
	P[0] = P[1] = 0;
	for(int i=2;i< (int)sqrt((double)220000);i++) {
		if(P[i] == 1) {
			for(int j=i*i;j<220000;j+=i) {
				P[j] = 0;
			}
		}
	}
	while(t--){
		int n;
		cin >> n;
		int x=r[n];
		int count=0;
		for(int i=0;i<=x;i++){
			if(P[i])
				count++;
		}
		cout << count << endl;
	}
	return 0;
}
