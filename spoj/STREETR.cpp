#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<cstdio>
#include<cstdlib>
using namespace std;
long long int gcd(int a,int b){
	if(a>b)
		return gcd(b,a);
	else{
		int c=b%a;
		if(c==0) 
			return a;
		else 
			return(gcd(b%a,a));
	}
}
int main(){
	long long int n,i,temp,temp2,s=0;
	cin >> n;
	cin >> temp;
	long long int arr[n];
	for(i=0;i<n-1;i++){
		cin >> temp2;
		arr[i]=temp2-temp;
		temp=temp2;
	}
	long long int g=gcd(arr[0],arr[1]);
	for(i=2;i<n-1;i++)
		g=gcd(g,arr[i]);
	for(i=0;i<n-1;i++)
		s+=((arr[i]/g)-1);
	cout << s << endl;
	return 0;
}
