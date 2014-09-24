#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
using namespace std;
#define MAX 200006
int arr[MAX];
int temp[MAX];
unsigned long long  merge(int arr[],int temp[],int st, int mid,int ed){
	unsigned long long int invcnt=0;
	int i=st;
	int j=mid;
	int k=st;
	while((i<=mid-1) && (j<=ed)){
		if(arr[i]<=arr[j])
			temp[k++]=arr[i++];
		else{
			temp[k++]=arr[j++];
			invcnt+=(mid-i);
		}
	}
	while(i<=mid-1)
		temp[k++]=arr[i++];
	while(j<=ed)
		temp[k++]=arr[j++];
	for(int i=st;i<=ed;i++)
		arr[i]=temp[i];
	return invcnt;
}
unsigned long long int mergesort(int arr[],int temp[],int st, int ed){
	unsigned long long int invcnt=0;
	if(ed>st){
		int mid=(st+ed)/2;
		invcnt=mergesort(arr,temp,st,mid);
		invcnt+=mergesort(arr,temp,mid+1,ed);
		invcnt+=merge(arr,temp,st,mid+1,ed);
	}
	return invcnt;
}
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		for(int i=0;i<n;i++)
			cin >> arr[i];
		printf("%llu\n",mergesort(arr,temp,0,n-1));
	}
	return 0;
}
