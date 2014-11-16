#include<iostream>
#include<string>
#include<vector>
using namespace std;

int find(vector<int> arr, int n){
	vector<vector<int> > res(n*(n+1)/2);
	int idx=0;
	int gap=0,st,ed;
	while(gap<n){
		st=0;
		ed=st+gap;
		while(ed<n){
			for(int i=st;i<=ed;i++)
				res[idx].push_back(arr[i]);
			idx++;
			st++;ed++;
		}
		gap++;
	}
	int count=0;
	for(int i=0;i<res.size();i++){
		int sum=0;
		for(int j=0;j<res[i].size();j++){
			if(j%2)
				sum=sum+res[i][j];
			else
				sum=sum-res[i][j];
		}
		if(sum%11==0)
			count++;
	}
	return count;
}
int main(){
	int n;
	cin >> n;
	vector<int> arr;
	while(n){
		arr.insert(arr.begin(),n%10);
		n/=10;
	}
	cout << find(arr,arr.size()) << endl;
	return 0;
}
