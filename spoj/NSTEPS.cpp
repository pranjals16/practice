#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
	int t,x,y;
	cin >> t;
	while(t--){
		cin >> x >> y;
		if(x!=y && (x-y)!=2)
			cout << "No Number" << endl;
		else if(x==y){
			if(x%2==1)
				cout << x+y-1 << endl;
			else
				cout << x+y << endl;
		}
		else{
			if(x%2==0)
				cout << x+y << endl;
			else
				cout << x+y-1 << endl;
		}
	}
	return 0;
}
