#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;

int v[2000000];

int main(){
	int n,p=0,count=0,val;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin >> arr[i];
	for(int i=0;i<n;i++)
		if(arr[i])
			for(int j=0;j<n;j++)
				for(int k=0;k<n;k++)
					v[p++]=arr[i]*(arr[j]+arr[k]);
	sort(v,v+p);
	
	for(int i=0;i<n;i++)
		for(int j=0;j<n;j++)
			for(int k=0;k<n;k++){
				val=arr[i]*arr[j]+arr[k];
				count+=upper_bound(v,v+p,val)-lower_bound(v,v+p,val);
			}
	cout << count << endl;
	return 0;
}
