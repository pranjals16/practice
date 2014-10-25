#include <iostream>
#include <deque>
#include <string>
#include <cstring>
using namespace std;

const char table[10][5]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void find(int number[], int pos,char result[], int n)
{
	if(pos==n){
		for(int i=0;i<n;i++)
			cout << result[i];
		cout << endl;
		return;
	}
	for(int i=0;i<strlen(table[number[pos]]);i++){
		result[pos]=table[number[pos]][i];
		find(number,pos+1,result,n);
		if(number[pos]==0 || number[pos]==1)
			return;
	}
}
 
int main()
{
	int number[]={2,3,6};
	int n=sizeof(number)/sizeof(number[0]);
	char result[n+1];
	result[n]='\0';
	find(number,0,result,n);
	return 0;
}
