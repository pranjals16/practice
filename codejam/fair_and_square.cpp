#include<cstdio>
#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int bar[50];

bool check(const long long k){
	long long tmp=k;
	int cnt=0;
	while(tmp){
		bar[++cnt]=tmp%10;
		tmp/=10;
	}
	for (int i=1;i<=cnt-i+1;++i)
		if(bar[i]!=bar[cnt-i+1])
			return false;
	return true;
}

int main() {
	int t,iter=1;
	cin >> t;
	while(t--){
		long long a, b;
		cin >> a >> b;
		long long t1 = 0,t2 = 0;
		while (t1*t1<a)
			++t1;
		t2=t1;
		while(t2*t2<=b) 
			++t2;
		int ans=0;
		for (int i = t1; i < t2; ++i) {
			if (check(i) && check((long long)i*i))
				++ans;
		}
		cout << "Case #" << iter++ << ": " << ans << endl;
	}
	return 0;
}

