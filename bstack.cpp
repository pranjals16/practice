#include <iostream>
#include <string>
#include <vector>
#include <cstdio>

using namespace std;

void printsp(vector<vector<string> > arr){
	int m=arr.size();
	int n=arr[0].size();
	int i,k=0,l=0;
	while(k<m && l<n){
		for(int i=l;i<n;i++)
			cout << arr[k][i] << " ";
		k++;
		
		for(int i=k;i<m;i++)
			cout << arr[i][n-1] << " ";
		n--;
		if(k<m){
			for(int i=n-1;i>=l;i--)
				cout << arr[m-1][i] << " ";
			m--;
		}
		if(l<n){
			for(int i=m-1;i>=k;i--)
				cout << arr[i][l] << " ";
			l++;  
		}
	}
	cout << endl;
}
int main()
{
    	vector<vector<string> > arr;
    	string a;
    	while(getline(cin,a)){
    		int n=a.size();
    		int j=0,count=0;
    		vector<string> temp;
    		while(j<n){
    			while(a[j]!=32 && j<n)
    				j++;
    			string k=a.substr(count,j-count);
			temp.push_back(k);
			while(a[j]==32)
				j++;
			count=j;
    		}
    		arr.push_back(temp);
    		//getline(cin,a);
    	}
    	int m=arr.size();
	int n=arr[0].size();
    	printsp(arr);
    /*for(int i=0;i<arr.size();i++){
    		for(int j=0;j<arr[0].size();j++){
    			cout << arr[i][j] << " ";
    		}
    		cout << endl;
    	}*/
	return 0;
}
 
