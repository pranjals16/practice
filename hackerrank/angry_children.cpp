#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<limits.h>
using namespace std;



int main() {

	int N, K, unfairness;
	cin >> N >> K;
	int candies[N];
	for (int i=0; i<N; i++)
		cin >> candies[i];
	sort(candies,candies+N);
	int res=INT_MAX;
	for(int i=0;i<=N-K;i++){
		int min=candies[i];
		int max=candies[i];
		for(int j=i;j<i+K;j++){
			if(candies[j]<=min)
				min=candies[j];
			if(candies[j]>max)
				max=candies[j];
		}
		//cout << min <<"---"<<max<<endl;
		if((max-min)<res)
			res=(max-min);	
	}
	cout << res << "\n";
	return 0;
}
