#include<iostream>
#include<string>

using namespace std;

int main(){
	string a,b;
	cin >> a >> b;
	int n=a.size(),m=b.size();
	while(a.find(b)!=(string::npos)){
		a.erase(a.find(b),m);
		//cout << a.find(b) << endl;
	}
	cout << a << endl;
	return 0;
}
