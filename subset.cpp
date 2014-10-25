#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
#include<cmath>

using namespace std;

int main(){
	int n;
	vector<int> arr;
	cin >> n;
	while(n){
		arr.push_back(n);
		cin >> n;
	}
	vector<vector<int> > res;
	vector<int> temp;
	res.push_back(temp);
	n=arr.size();
	sort(arr.begin(),arr.end());
	for(int i=0;i<n;i++){
		vector<vector<int> > temp1(res);
		for(int j=0;j<temp1.size();j++)
			temp1[j].push_back(arr[i]);
		res.insert(res.end(),temp1.begin(),temp1.end());
	}
	return 0;
}
