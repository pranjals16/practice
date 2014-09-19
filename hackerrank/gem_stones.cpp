#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	int n,l=0;
	cin >> n;
	int tmp=n;
	int a[255];
	for(int i=0;i<255;i++)
		a[i]=0;
	while(n--){
		string s;
		cin >> s;
		for(int i=0;i<s.size();i++){
			if(a[s[i]]==l)
				a[s[i]]+=1;		
		}
		l++;
	}
	int count=0;
	for(int j=0;j<255;j++){
		if(a[j]==tmp)
			count++;
	}
	cout << count << endl;
	return 0;
}

