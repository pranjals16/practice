#include <iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;
int gb;
void swap (int *x, int *y){
	int temp;
	temp = *x;
	*x = *y;
	*y = temp;
}
void display(int arr[],int n, int st){
	if(st==n){
		gb--;
		if(gb==0){
			for(int i=0;i<n;i++)
				cout << arr[i];
			cout << endl;
		}
		return;
	}
	else{
		for(int i=st;i<n;i++){
			swap((arr+st),(arr+i));
			display(arr,n,st+1);
			swap((arr+st),(arr+i));
		}
	}
}
int main() {
	int n;
	gb=6;
	cin >> n;
	int arr[n];
	for(int i=0;i<n;i++)
		arr[i]=i+1;
	display(arr,n,0);
	return 0;	
}
