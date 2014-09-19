#include <cmath>
#include <cstdio>
#include <limits>
#include <vector>
#include<string.h>
#include <cstdlib>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	char count[255];
	for(int i=0;i<255;i++)
		count[i]=0;
	string s;
	string c;
	int count1=0;
	while(cin >> c){
		s+=c;
	}
	int n=s.size();
	for(int i=0;i<n;i++){
		if(s[i]<=90 && s[i]>=65)
			count[s[i]+32]++;
		else
			count[s[i]]++;			
	}
	for(int i=97;i<=122;i++){
		if(count[i]==0){
			cout << "not pangram" << endl;
			return 0;
		}
	}
	cout << "pangram";
	cout << endl;
	return 0;
}

