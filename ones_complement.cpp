#include<iostream>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;
int main(){
	int n=1,res=0,dig=0;
	int temp=n;
	while(temp){
		dig++;
		temp/=2;
	}
	int arr[dig];
	temp=n;
	for(int i=0;i<dig;i++){
		arr[i]=(temp%2)?0:1;
		temp/=2;
	}
	for(int i=dig-1;i>=0;i--)
		res=2*res+arr[i];
	cout << res << endl;
	return 0;
}
