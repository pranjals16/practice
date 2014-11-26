#include<iostream>
#include<cstdio>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int main(){
	int t,n,temp;
	cin >> t;
	while(t--){
		int count[10001]={0};
		cin >> n;
		for(int i=0;i<n;i++){
			cin >> temp;
			count[temp]++;
		}
		int index=1,maxval=1;
		for(int i=1;i<=10000;i++){
			int val=count[i];
			if(val>maxval){
				index=i;
				maxval=val;
			}
			else if(val==maxval && i<index)
				index=i;
		}
		cout << index << " " << maxval << endl;
	}
	return 0;
}
