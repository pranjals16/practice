#include <iostream>
#include <deque>
 
using namespace std;
 
int bitonic(int arr[], int n)
{
	int left[n],right[n];
	left[0]=1;
	right[n-1]=1;
	for(int i=1;i<n;i++){
		if(arr[i]>arr[i-1])
			left[i]=left[i-1]+1;
		else
			left[i]=1;
	}
	for(int i=n-2;i>=0;i--){
		if(arr[i]>arr[i+1])
			right[i]=right[i+1]+1;
		else
			right[i]=1;	
	}
	int max=1;
	for(int i=0;i<n;i++){
		if((left[i]+right[i]-1)>max)
			max=left[i]+right[i]-1;
	}
	return max;
}
 
int main()
{
	int arr[] = {10, 20, 30, 40};
	int n = sizeof(arr)/sizeof(arr[0]);
	int max;
	for(int i=0;i<n;i++)	
		cout<<arr[i]<<"  ";
	max=bitonic(arr, n);
	cout << "\n" << max <<"\n";
	return 0;
}
