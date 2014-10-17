#include<iostream>
#include<cstdio>
#include<string>
#include<vector>

using namespace std;
void printseq(int n, int k, int len, int arr[]){
	if(len==k){
		for(int i=0;i<k;i++)
			cout << arr[i] << " ";
		cout << endl;
	}
	int i=(len==0)?1:arr[len-1]+1;
	len++;
	while(i<=n){
		arr[len-1]=i;
		printseq(n,k,len,arr);
		i++;
	}
	len--;
}

int main(){
	int n,k;
	cin >> k >> n;
	if(k>n)
		cout << "No such Sequence Exists!!\n";
	else if(k==n){
		int i=1;
		while(i<=n)
			cout << i++ << " ";
		cout << endl;
	}
	else{
		int arr[k];
		printseq(n,k,0,arr);
	}
	return 0;
}
