#include<iostream>
#include<string>
#include<ctype.h>
#include<vector>
#include<algorithm>
using namespace std;
/*1[0]*1 where * denotes zero or more occurrences of the digit 0*/

int main(){
	string s;
	cin >> s;
	int i=0;
	int count=0,state=0;
	while(s[i]!='\0'){
		if(s[i]=='1'){
			if(state==2){
				//cout << i << endl;
				count++;
			}
			else if(state==1){
				//cout << i << endl;
				count++;
			}
			state=1;
			i++;
			continue;
		}
		else if(s[i]=='0'){
			if(state==1)
				state=2;
			i++;
			continue;
		}
		else{
			//cout << state << "here\n";
			state=0;
			i++;
			continue;
		}
	}
	cout << count << endl;
	return 0;
}
