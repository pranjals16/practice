#include <iostream>
#include <deque>
 
using namespace std;
 
int findmin(int arr[], int st, int ed)
{
	if(ed<st) return arr[0];
	if(ed==st) return arr[st];
	int mid=st+(ed-st)/2;
	if(mid<ed && arr[mid+1]<arr[mid])
		return arr[mid+1];
	if(mid>st && arr[mid]<arr[mid-1])
		return arr[mid];
	if(arr[ed]>arr[mid])
		return findmin(arr,st,mid-1);
	else
		return findmin(arr,mid+1,ed);
}
 
int main()
{
    int arr1[] =  {2, 2, 2, 2, 2, 2, 2, 2, 0, 1, 1, 2};
    int n1 = sizeof(arr1)/sizeof(arr1[0]);
    cout << "The minimum element is: " << findmin(arr1, 0, n1-1) <<"\n";
}
