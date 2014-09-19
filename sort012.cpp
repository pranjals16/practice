#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>

using namespace std;
void swap(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
void sort012(int a[],int size){
	int l=0;
	int m=0;
	int r=size-1;
	while(m<=r){
		switch(a[m]){
			case 0:
				swap(&a[l++],&a[m++]);
				break;
			case 1:
				m++;
				break;
			case 2:
				swap(&a[m++],&a[r--]);
				break;			
		}
	}
}
int main() {
	int a[]={0,2,0,0,1,1,0,2};
	int size=sizeof(a)/sizeof(a[0]);
	for(int i=0;i<size;i++)
		cout << a[i]<<"\n";
	sort012(a,size);
	for(int i=0;i<size;i++)
		cout << a[i]<<"\n";
}
