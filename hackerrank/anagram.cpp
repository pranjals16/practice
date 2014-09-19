#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int t;
	cin >> t;
	while(t--){
		string s;
		cin >> s;
		int n=s.size();
		if(n%2==1){
			cout << "-1" << endl;
			continue;
		}
		int counta[255],countb[255];
		int x=n/2;
		for(int i=0;i<255;i++){
			counta[i]=0;countb[i]=0;
		}
		for(int i=0;i<x;i++)
			counta[(int)s[i]]++;
		for(int i=x;i<n;i++)
			countb[(int)s[i]]++;
		long count=0;
		for(int i=97;i<=122;i++){
			if(counta[i]>countb[i])
				count+=(counta[i]-countb[i]);
			else
				count+=(countb[i]-counta[i]);
		}
		cout << count/2 << endl;
		
	}
	return 0;
}

