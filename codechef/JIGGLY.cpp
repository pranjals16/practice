#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;
int main(){
	int t,n,q;
	cin >> t;
	while(t--){
		cin >> n;
		int arr[n];
		for(int i=0;i<n;i++)
			cin >> arr[i];
		cin >> q;
		int sum=0,played=q;
		for(int i=0;i<n;i++){
			if(arr[i]>played){
				sum=sum+(arr[i]-played);
				played=q;
				continue;
			}
			else if(arr[i]==played){
				played=q;
				continue;
			}
			else{
				played=q-arr[i];
				continue;
			}
		}
		cout << sum << endl;
	}
	return 0;
}
