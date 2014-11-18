#include<iostream>
#include<stack>
#include<cstdlib>
using namespace std;
int gcd(int a, int b) {
	while(b) b ^= a ^= b ^= a %= b;
	return a;
}

int find(int a, int b, int c){
	int count=1,x=a,y=0,pour=0;
	while(x){
		pour=min(x,b-y);
		x-=pour;
		y+=pour;
		count++;
		if(x==c || y==c) break;
		if(y==b) 	y=0,count++;
		else if(x==0)	x=a,count++;
	}
	return count;
}
int main(){
	int t,a,b,c;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		if(a==c || b==c)
			cout << "1\n";
		else if(a<c && b<c)
			cout << "-1\n";
		else if(c%gcd(a,b))
			cout << "-1\n";
		else
			cout << min(find(a,b,c),find(b,a,c)) << endl;
	}
	return 0;
}
