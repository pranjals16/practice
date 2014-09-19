#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	string s;
	cin >> s;
	int n=s.size();
	int i=floor(sqrt(n));
	int j=ceil(sqrt(n));
	if(i*i>=n)
		j=i;
	else if(i*j>=n)
		i=i;
	else if( j*j>=n)
		i=j;
	int x=i,y=j;
	char arr[x][y];
	int count=0;
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			if(count<n){
				arr[i][j]=s[count];
				count++;
			}
			else
				arr[i][j]='.';
		}
	}
	for(int i=0;i<y;i++){
		for(int j=0;j<x;j++){
			if(arr[j][i]!='.')
				cout << arr[j][i];
			else
				break;
		}
		cout << " ";
	}
	cout <<endl;
	return 0;
}

