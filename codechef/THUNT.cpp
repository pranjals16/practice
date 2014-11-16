#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;
int main(){
	int n;
	cin >> n;
	int arr[n][n];
	int st=0,ed=n-1,val=1;
	bool flag=true;
	while(st<=ed){
		if(flag){
			for(int i=0;i<n;i++)
				arr[st][i]=val++;
			flag=false;
			st++;
		}
		else{
			for(int i=0;i<n;i++)
				arr[ed][i]=val++;
			flag=true;
			ed--;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout << arr[i][j];
			if(j<n-1)
				cout << "*";
		}
		cout << endl;
	}
	return 0;
}
