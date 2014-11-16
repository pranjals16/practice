#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<math.h>
using namespace std;
int n;
vector<int> arr;


bool isPrime(long long int number){
	if(number < 2) return false;
	if(number == 2) return true;
	if(number % 2 == 0) return false;
	for(long long int i=3; (i*i)<=number;i+=2)
		if(number % i == 0 ) 
			return false;
	return true;
}


int main(){
	cin >> n;
	while(n--){
		long long int temp,sum=0;
		cin >> temp;
		while(temp){
			sum=sum+(temp%10);
			temp/=10;
		}
		if(isPrime(sum))
			arr.push_back(1);
		else
			arr.push_back(0);
	}
	long long int res=0;
	int siz=arr.size();
	for(int i=0;i<siz;i++)
		res=res+(arr[i]*pow(2,(siz-i-1)));
	
	cout << res << endl;
	return 0;
}
