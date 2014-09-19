#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include<string.h>
using namespace std;
const char hashTable[10][5] = {"", "", "abc", "def", "ghi", "jkl",
                               "mno", "pqrs", "tuv", "wxyz"};
void printWords(int number[],int curr,char output[],int n)
{
	int i;
	if(curr==n){
		cout <<output << "\n";
		return;
	}
	for(i=0;i<strlen(hashTable[number[curr]]);i++){
		output[curr]=hashTable[number[curr]][i];
		printWords(number,curr+1,output,n);
		if(number[curr]==0 || number[curr]==1)
			return;
	}
}
int main()
{
	int number[] = {2, 3, 4};
	int n = sizeof(number)/sizeof(number[0]);
	char result[n+1];
    	result[n] ='\0';
	printWords(number, 0,result,n);
	return 0;
}
