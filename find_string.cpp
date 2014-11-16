#include <iostream>
#include <string>

using namespace std;

int main(){
	string s[]={"a", "b","","","c","",""};
	int n=sizeof(s)/sizeof(s[0]);
	cout << n << endl;
	string f="c";
	for(int i=0;i<n;i++){
		if(s[i]==f){
			cout << i << endl;
			break;
		}
	}
//	cout << s.find(f) << endl;
}
