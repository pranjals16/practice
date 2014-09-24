#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<math.h>
using namespace std;

int invert(int n){
	int bit[64];
	int i=0;
	while(n>0){
		bit[i++]=n%2;
		n=n/2;
	}
	int temp=0;
	for(int j=i-1,x=0;j>=0;++x,--j)
		temp+=pow(2,x)*bit[j];
	return temp;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		if(n%2!=0)
			cout << n << endl;
		else
			cout << invert(n) << endl;
	}
	return 0;
}
