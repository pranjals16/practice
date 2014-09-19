#include <stdio.h>
#include<iostream>
#include<cmath>
#include<cstdlib>
using namespace std;
int main()
{
	long n,k;
	cin >> n;
	long arr[n];
	for(long i=0;i<n;i++)
		cin >> arr[i];
	cin >> k;
	long max=arr[0];
	long i=0,j=k-1,index=0;
	for(long i=1;i<k;i++){
		if(arr[i]>max){
			max=arr[i];
			index=i;
		}
	}
	i=1,j=k;
	while(j<n-1){
		cout << max << endl;
		if(arr[j]>=max && i<index)
		
		i++;
		j++;
	}
	return 0;
}
