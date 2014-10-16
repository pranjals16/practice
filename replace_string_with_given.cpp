#include<iostream>
#include<string>

using namespace std;

int main(){
	string s,a,b;
	cin >> s >> a >> b;
	int n1,n2,n3;
	n1=s.size();
	n2=a.size();
	n3=b.size();
	int i=0;
	int pos;
	pos=s.find(a);
	if(n2==n3){
		int temp=pos;
		while(i<n2)
			s[temp++]=b[i++];
	}
	else{
		i=0;
		int temp=pos;
		while(i<n2)
			s[temp++]=b[i++];
		s.insert(pos+n2,b.substr(i,n3-i+1));
	}
	cout << s << endl;
	return 0;
}
