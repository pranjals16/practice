#include<iostream>
#include<algorithm>
#include <stdio.h>
#include <string>
#include <vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(20000,0);
	int temp[n];
	for(int i=0;i<n;i++)
		cin >> temp[i];
	int count=0;
	for(int i=0;i<n;i++){
		if(arr[temp[i]-1]==0 && arr[temp[i]+1]==0){
			arr[temp[i]]=1;
			count++;
		}
		else if(arr[temp[i]-1]==1 && arr[temp[i]+1]==1){
			arr[temp[i]]=1;
			count--;
		}
		else
			arr[temp[i]]=1;
		cout << count << endl;
	}
	cout << "Justice\n";
	return 0;
}
