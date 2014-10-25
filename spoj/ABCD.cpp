#include<stdio.h>
#include<string.h>
#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
#include<math.h>
#include<map>
using namespace std;
#define mp make_pair

int main(){
	int N;
	map<string,string> M;
	string str1,str2,temp1,var1;
	scanf("%d",&N); cin >> str1 ;
	M.insert(mp("AB","CD"));M.insert(mp("BA","CD"));
	M.insert(mp("AC","BD"));M.insert(mp("CA","BD"));
	M.insert(mp("AD","BC"));M.insert(mp("DA","BC"));
	M.insert(mp("BC","AD"));M.insert(mp("CB","AD"));
	M.insert(mp("BD","AC"));M.insert(mp("DB","AC"));
	M.insert(mp("CD","AB"));M.insert(mp("DC","AB"));
	str2 = M[str1.substr(0,2)];
	for(int i = 2 ; i < (N << 1) ; i+=2)
	{
	temp1 = M[str1.substr(i,2)];
	if(temp1[0] == str2[i-1]) swap(temp1[0],temp1[1]);
	str2 = str2 + temp1;	
	}
	cout << str2 << endl;
}
