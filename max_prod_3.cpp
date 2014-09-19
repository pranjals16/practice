#include <iostream>
#include <deque>
 
using namespace std;
 
int maxprod(int arr[], int n)
{
	int lsl[n],rsl[n];
	lsl[0]=1;
	rsl[n-1]=1;
	int max=lsl[0];
	for(int i=1;i<n;i++){
		if(arr[i-1]>max && arr[i]>=max){
			lsl[i]=arr[i-1];
			max=arr[i-1];
		}
		else
			lsl[i]=max;
	}
	max=rsl[n-1];
	for(int i=n-2;i>=0;i--){
		if(arr[i+1]>max && max>=arr[i]){
			rsl[i]=arr[i+1];
			max=arr[i+1];
		}
		else
			rsl[i]=max;
	}
	max=lsl[0]*arr[0]*rsl[0];
	for(int i=1;i<n;i++){
		if((lsl[i]*arr[i]*rsl[i])>max)
			max=lsl[i]*arr[i]*rsl[i];
	}
	for(int i=0;i<n;i++)
		cout <<lsl[i] <<" ";
	cout <<endl;
	return max;
}
 
int main()
{
    int arr[] =  {1, 5, 10, 8, 9};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout << "The maximum product is: " << maxprod(arr, n) <<"\n";
}
