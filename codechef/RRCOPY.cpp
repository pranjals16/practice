#include <iostream>
#include<string>
#include<stack>
#include<algorithm>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--){
		long long int n,temp;
		cin >> n;
		for(long long int i=0;i<n;i++)
			cin >> temp;
		cout << (n*(n-1))/2 << endl;
	}
	return 0;	
}
