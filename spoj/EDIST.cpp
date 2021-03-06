#include<iostream>
#include<string.h>
#include<stdio.h>
#include<cstdlib>
#include<math.h>
using namespace std;
int table[2002][2002];
int edit(string a, string b, int m, int n){
	table[0][0]=0;
	for(int i=1;i<=m;++i){
		table[i][0]=i;
	}
	for(int i=1;i<=n;++i){
		table[0][i]=i;
	}
	for(int i=1;i<=m;++i){
		for(int j=1;j<=n;++j){
			int tmp;
			if(a[i-1]==b[j-1])
				tmp=0;
			else
				tmp=1;
			table[i][j]=min(table[i-1][j-1]+tmp,min(table[i-1][j]+1,table[i][j-1]+1));
		}
	}
	return table[m][n];
}
int main(){
	int n;
	cin >> n;
	char a[2002],b[2002];
	while(n--){
		scanf("%s",a);
		scanf("%s",b);
		cout << edit(a,b,strlen(a),strlen(b)) << endl;
	}
	return 0;
}
