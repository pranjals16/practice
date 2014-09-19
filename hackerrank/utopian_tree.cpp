#include <iostream>
using namespace std;

int height(int n) {
	int st=1;
	while(n){
		if(n/2>0){
			st=st*2+1;
			n=n-2;
		}
		else{
			st=st*2;
			n-=1;
		}
	}
	return st;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
