#include<stdio.h>
#include<iostream>
#include<map>
#include<vector>
using namespace std;
int main()
{
	int n,k;
	cin >> n >> k;
	while(n)
	{
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		while(k--){
			map<int,int> code;
			code.clear();
			int p,q;
			cin >> p >> q;
			for(int i=p;i<=q;i++)
				code[arr[i-1]]++;
			int max=1;
			int val=arr[p];
			for( map<int,int>::iterator ii=code.begin(); ii!=code.end(); ++ii){
				//cout << (*ii).first << "----" << (*ii).second << endl;
				if((*ii).second>max){
					max=(*ii).second;
					val=(*ii).first;
				}
			}
			cout << max << endl;
		}
		cin >> n >> k;
	}
	return 0;
}
