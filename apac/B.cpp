#include<iostream>
#include<cstdio>
#include<string>
#include<queue>
#include<vector>
using namespace std;
#define MAX 5000
int n,q;

int main(){
	int t,iter=1;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[MAX]={0};
		int a,b,inp;
		for(int i=0;i<n;i++){
			cin >> a >> b;
			for(int j=a;j<=b;j++)
				arr[j]++;
		}
		cin >> q;
		printf("Case #%d: ", iter++);
		for(int i=0;i<q;i++){
			cin >> inp;
			cout << arr[inp] << " ";
		}
		cout << endl;
	}
	return 0;
}
