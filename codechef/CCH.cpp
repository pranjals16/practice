#include<iostream>
#include<string>
#include<cstring>
#include<vector>
#include<stack>
using namespace std;
int main(){
	int n,m;
	cin >> n >> m;
	bool arr[n+1];
	for(int i=1;i<=n;i++)
		arr[i]=false;
	int i=1,count=1;
	vector<int> out;
	int gcount=0;
	while(1){
		if(gcount==n-1)
			break;
		if(count==m && !arr[i]){
			arr[i]=true;
			out.push_back(i);
			i=(i+1)%n;
			//if(i==0)
			//	i=1;
			count=1;
			gcount++;
		}
		else if(!arr[i]){
			i=(i+1)%n;
			//if(i==0)
			//	i=1;
			count++;
		}
		else{
			i=(i+1)%n;
			//if(i==0)
			//	i=1;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i])
			break;
	}
	i=i+1;
	int z;
	if(i<=9)
		z=i;
	else{
		int temp=i;
		z=0;
		while(temp){
			z=z+(temp%10);
			temp/=10;
		}
	}
	//cout << z << endl;
	//for(int i=0;i<out.size();i++)
	//	cout << out[i]+z;
	cout << endl;
	return 0;
}
