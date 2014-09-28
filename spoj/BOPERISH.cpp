#include <cmath>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <cstring>
#include <map>
using namespace std;

int main(){
	int t;
	while(cin>>t){
		int h_index=0;
		if(t==0)
			break;
		else{
			int arr[t];
			for(int i=0;i<t;i++)
				cin >> arr[i];
			sort(arr,arr+t,greater<int>());
			for(int i=0;i<t;i++){
				if(arr[i]>h_index)
					h_index++;
			}
		}
		cout << h_index << endl;
	}
	return 0;
}
