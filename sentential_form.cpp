#include<iostream>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;
string ones[20]={"", "one", "two", "three","four","five","six","seven","eight","nine", "eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
string tens[10]={"", "ten", "twenty", "thirty","forty","fifty","sixty","seventy","eighty","ninety"};
string place[4]={"","","hundred","thousand"};
int main(){
	int t,n;
	cin >> t;
	while(t--){
		cin >> n;
		vector<int> arr;
		int temp=n;
		while(temp){
			arr.push_back(temp%10);
			temp/=10;
		}
		for(int i=arr.size()-1;i>=0;i--){
			if(i==1 && arr[i]==1 && arr[i-1]>=1 && arr[i-1]<=9){
				cout << ones[10*arr[i]+arr[i-1]-1] << " ";
				i--;
			}
			else if(i==1)
				cout << tens[arr[i]] << " ";
			else if(i==0)
				cout << ones[arr[i]] << " ";
			else if(arr[i]!=0)
				cout << ones[arr[i]] << " " << place[i] << " ";
			else
				cout << ones[arr[i]] << " ";
		}
		cout << endl;
	}
	return 0;
}
