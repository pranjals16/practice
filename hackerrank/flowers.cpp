#include<iostream>
#include<algorithm>
using namespace std;
int main(void){
	int N, K;
	cin >> N >> K;
	int C[N];
	for(int i = 0; i < N; i++)
		cin >> C[i];
	sort(C,C+N);
	int result=0;
	int tmp=0;
	int count=0;
	for(int i=N-1;i>=0;i--){
		result+=C[i]*(tmp+1);
		count++;
		if(count>=K){
			tmp++;
			count=0;
		}
	}
	cout << result << "\n";

	return 0;
}

