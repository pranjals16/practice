#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;
void merge(int a[],int l,int m, int r){
	int i,j,k;
	int li=m-l+1;
	int ri=r-m;
	int L[li],R[ri];
	
	for(i=0;i<li;i++)
		L[i]=a[l+i];
	for(j=0;j<ri;j++)
		R[j]=a[m+1+j];
	i=0;
	j=0;
	k=l;
	while(i<li && j<ri){
		if(L[i]<=R[j]){
			a[k]=L[i];
			i++;
		}
		else{
			a[k]=R[j];
			j++;
		}
		k++;
	}
	while(i<li){
		a[k]=L[i];
		i++;
		k++;	
	}
	while(j<ri){
		a[k]=R[j];
		j++;
		k++;	
	}
}
void mergesort(int a[],int l, int r){
	if(l<r){
		int mid=l+(r-l)/2;
		mergesort(a,l,mid);
		mergesort(a,mid+1,r);
		merge(a,l,mid,r);
	}
}
int main() {
	int a[]={12, 11, 13, 5, 6, 7};
	int size=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<size;i++)
		cout << a[i]<<"\n";
	mergesort(a,0,size-1);
	for(int i=0;i<size;i++)
		cout << a[i]<<"\n";
}
