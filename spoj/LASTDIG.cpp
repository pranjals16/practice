#include<iostream>
#include<cstdlib>
using namespace std;
int lastdig(int a, int b){
	if(b==0)
		return 1;
	if(a%5==0)
		return 5;
	if(a%6==0)
		return 6;
	switch(a){
		case 1:return 1;
		case 2:{
			switch(b%4){
				case 1: return 2;
				case 2: return 4;
				case 3: return 8;
				case 0: return 6;
			}
		}
		case 3:{
			switch(b%4){
				case 1: return 3;
				case 2: return 9;
				case 3: return 7;
				case 0: return 1;
			}
		}
		case 4:{
			switch(b%2){
				case 1: return 4;
				case 0: return 6;
			}
		}
		case 7:{
			switch(b%4){
				case 1: return 7;
				case 2: return 9;
				case 3: return 3;
				case 0: return 1;
			}
		}
		case 8:{
			switch(b%4){
				case 1: return 8;
				case 2: return 4;
				case 3: return 2;
				case 0: return 6;
			}
		}
		case 9:{
			switch(b%2){
				case 1: return 9;
				case 0: return 1;
			}
		}
	}
}
int main(){
	int n,a,b;
	cin >> n;
	while(n--){
		cin >> a >> b;
		int out=lastdig(a,b);
		cout << out <<endl;
	}
	return 0;
}
