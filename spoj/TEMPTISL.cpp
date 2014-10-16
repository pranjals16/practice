#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
#include<cstdio>
#include<cstdlib>
using namespace std;

int main(){
	int n,k;
	long long int **arr=(long long int **)malloc((51)*sizeof(long long int *));
	for(int i=0;i<=50;i++)
		arr[i]=(long long int *)malloc(50*sizeof(long long int));
	for(int i=0;i<=50;i++)
		arr[0][i]=0;
	arr[0][0]=1;
	while(1){
		cin >> n >> k;
		if(n==-1 && k==-1)
			break;
		int a,b;
		cin >> a >> b;
		for(int i=1;i<=k;i++)
			for(int j=0;j<n;j++)
				arr[i][j]=arr[i-1][(int)abs(1-j)]+arr[i-1][(int)abs(n-1-j)];
		cout << arr[k][(int)abs(a-b)] << endl;
	}
	return 0;
}
