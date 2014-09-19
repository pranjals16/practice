#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	while(n--){
		int threes=0;
		int fives=0;
		int digits;
		cin >> digits;
		int tmp=digits;
		while(digits>0){
			if(digits%3==0){
				fives=digits;
				break;
			}
			digits-=5;
		}
		threes=tmp-digits;
		if(digits<0 || threes%5!=0){
			cout << "-1" <<endl;
			continue;
		}
		string s="";
		while(fives-- >0)
			s+="5";
		while(threes-->0)
			s+="3";
		cout << s << endl;
	}
	return 0;
}
