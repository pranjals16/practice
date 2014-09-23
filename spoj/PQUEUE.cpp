#include<iostream>
#include<cmath>
#include<cstdio>
#include<vector>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr(10001,0);
	arr[1]=1;
	arr[2]=2;
	arr[3]=3;
	for(int i=4;i<10001;i++){
		int count=0,j=1;
		for(j=1;j<=i;j++){
			if(i%j==0)
				count++;
		}
		if(count%2==1)
			arr[i]=arr[i-1]+count/2+1;
		else
			arr[i]=arr[i-1]+count/2;
	}
	cout << arr[n] << endl;
	return 0;
}
