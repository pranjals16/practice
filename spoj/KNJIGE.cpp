#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;

int main(){
	int n;
	cin >> n;
	int arr[n],b[n];
	for(int i=0;i<n;i++){
		cin >> arr[i];
		b[i]=arr[i];
	}
	sort(b,b+n);
	int j=n-1,count=0;
	for(int i=n-1;i>=0;i--){
		if(arr[i]==b[j]) 
			j--;
		else
			count++;
	}
	cout << count << endl;
	return 0;
}
