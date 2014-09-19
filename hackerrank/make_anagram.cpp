#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	string a,b;
	cin >> a >> b;
	int counta[255],countb[255];
	int x=a.size();
	int y=b.size();
	for(int i=0;i<255;i++){
		counta[i]=0;countb[i]=0;
	}
	for(int i=0;i<x;i++)
		counta[(int)a[i]]++;
	
	for(int i=0;i<y;i++)
		countb[(int)b[i]]++;
	long count=0;
	for(int i=97;i<=122;i++){
		if(counta[i]>countb[i])
			count+=(counta[i]-countb[i]);
		else
			count+=(countb[i]-counta[i]);
	}
	cout << count << endl;
	return 0;
}

