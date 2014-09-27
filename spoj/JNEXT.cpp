#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
void find(int arr[],int n){
	int j=n-1;
	while(j>0){
		if(arr[j-1]<arr[j])
			break;
		else
			j--;
	}
	int temp=arr[j-1];
	int min=arr[j]-temp;
	int i=j,index=i;
	while(i<n){
		if(arr[i]>temp && (arr[i]-arr[i-1])<min){
			min=arr[i]-arr[i-1];
			index=i;
		}
		i++;
	}
	int temp2=arr[index];
	arr[index]=temp;
	arr[j-1]=temp2;
	sort(arr+(j),arr+n);
	for(int i=0;i<n;i++)
		cout << arr[i];
	cout << endl;
}

int main()
{
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		find(arr,n);
	}
	return 0;
}
