#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<math.h>
using namespace std;
bool find(int n){
	int temp=n;
	vector<int> arr;
	while(temp){
		arr.push_back(temp%8);
		temp/=8;
	}
	int i=0,j=arr.size()-1;
	while(i<=j){
		if(arr[i]==arr[j]){
			i++;
			j--;
		}
		else
			return false;
	}
	return true;
}
int main(){
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		if(find(n))
			cout << "1\n";
		else
			cout << "-1\n";
	}
	return 0;
}
