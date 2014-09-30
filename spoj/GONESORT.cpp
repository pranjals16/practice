#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
int findmin(vector<int> arr, int st, int ed){
	int min=arr[st],index=st;
	for(int i=st;i<=ed;i++){
		if(arr[i]<min){
			min=arr[i];
			index=i;
		}
	}
	return index;
}
int findmax(vector<int> arr, int st, int ed){
	int max=arr[st],index=st;
	for(int i=st;i<=ed;i++){
		if(arr[i]>max){
			max=arr[i];
			index=i;
		}
	}
	return index;
}
int find(vector<int> arr, int n){
	int count=0;
	int st=0,ed=n-1;
	while(st<ed){
		int min=findmin(arr,st,ed);
		if(min!=st){
			rotate(arr.begin()+st,arr.begin()+min,arr.begin()+min+1);
			count++;
		}
		st++;
		
		int max=findmax(arr,st,ed);
		if(max!=ed){
			rotate(arr.begin()+max+1,arr.begin()+max,arr.begin()+ed);
			count++;
		}
		ed--;
		//break;
	}
	
	//for(int i=0;i<n;i++)
	//	cout << arr[i] << " ";
	//cout << endl;
	return count;
}

int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> arr(n);
		for(int i=0;i<n;i++)
			cin >> arr[i];
		cout << find(arr,n) << endl;
	}
	return 0;
}
