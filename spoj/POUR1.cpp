#include<iostream>
#include<set>
#include<bitset>
#include<cstdio>
using namespace std;

int gcd(int a, int b) {
	while(b) b ^= a ^= b ^= a %= b;
	return a;
}
int find(int a ,int b, int c){
	int move=1,x=a,y=0,pour;
	while(x!=c && y!=c){
		pour=min(x,b-y);
		y+=pour;
		x-=pour;
		move++;
		if(x==c || y==c) break;
		if(y==b) y=0,move++;
		else if(x==0) x=a,move++; 
	}
	return move;
}

int main(){
	int t,a,b,c;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		if(c>a && c>b)
			cout << "-1\n";
		else if(!c)
			cout << "0\n";
		else if(a==c || b==c)
			cout << "1\n";
		else if(c%gcd(a,b))
			cout << "-1\n";
		else
			cout << min(find(a,b,c),find(b,a,c)) << endl;
	}
	return 0;
}
