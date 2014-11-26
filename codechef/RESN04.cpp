#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<vector>
using namespace std;
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		int temp,res;
		/*if(n==1){
			cout << "ALICE\n";
			continue;
		}*/
		cin >> temp;
		res=temp;
		for(int i=1;i<n;i++){
			cin >> temp;
			res=res^temp;
		}
		cout << res << endl;
		if(res==0)
			cout << "ALICE\n";
		else
			cout << "BOB\n";
	}
	return 0;
}
