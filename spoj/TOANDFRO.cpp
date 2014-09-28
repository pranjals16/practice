#include<iostream>
#include<algorithm>
#include <stdio.h>
#include <string>
using namespace std;

int main()
{
	int col;
	cin >> col;
	while(col){
		string s;
		cin >> s;
		int len=s.size(),k=0;
		int row=len/col;
		char arr[row][col];
		for(int i=0;i<row;i++){
			if(i%2==0){
				for(int j=0;j<col;j++){
					arr[i][j]=s[k++];
				}			
			}
			else{
				for(int j=col-1;j>=0;j--){
					arr[i][j]=s[k++];
				}
			}
		}
		for(int i=0;i<col;i++)
			for(int j=0;j<row;j++)
				cout << arr[j][i];	
		cout << endl;
		cin >> col;
	}
	return 0;
}
