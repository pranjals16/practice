#include <vector>
#include <algorithm>
#include <iostream>
#include <cstdio>
#include <cstdlib>
using namespace std;
long find(vector<long> &arr){
	vector<long> l(arr.size(),0);
	vector<long> r(arr.size(),0);
	for(int i=0;i<arr.size();i++){
		int j=i;
		while((j>0) && (arr[i]<=arr[j-1]))
			j=l[j-1];
		l[i]=j;
	}
	for(int i=arr.size()-1;i>=0;i--){
		int j=i;
		while((j<arr.size()-1) && (arr[i]<=arr[j+1]))
			j=r[j+1];
		r[i]=j;
	}
	long maxa=0;
	for(int i=0;i<l.size();i++)
		maxa=max(maxa,((r[i]-l[i]+1)*arr[i]));
	return maxa;
}
int main(){
	int t;
	cin >> t;
	while(t){
		vector<long> arr(t,0);
		for(int i=0;i<t;i++)
			cin >> arr[i];
		cout << find(arr) << endl;;
		cin >> t;
	}
	return 0;
}
