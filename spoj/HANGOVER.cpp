#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;
int main(){
	float arr[275];
	for (int i=0;i<275;i++)
		arr[i]=1.0/(2.0+i);
	float sum=0.0;
	for(int i=0;i<275;i++){
		sum+=arr[i];
	}
	float n;
	scanf("%f",&n);
	while(n){
		float sum=0;
		int i=0;
		for(i=0;i<275;i++){
			sum+=arr[i];
			if(sum>=n)
				break;
		}
		cout << i+1 << " card(s)"<<endl;
		scanf("%f",&n);
	}
	return 0;
}
