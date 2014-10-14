#include<iostream>
#include<cstdio>
#include<string>
#include<map>

using namespace std;

int main(){
	int t,a,b,x[4][4],y[4][4],iter=1;
	cin >> t;
	while(t--){
		map<int,int> mp;
		cin >> a;
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				cin >> x[i][j];
		for(int k=0;k<4;k++)
			mp[x[a-1][k]]++;
		cin >> b;
		for(int i=0;i<4;i++)
			for(int j=0;j<4;j++)
				cin >> y[i][j];
		for(int k=0;k<4;k++)
			mp[y[b-1][k]]++;
		map<int,int>::iterator it;
		int count=0;
		int temp;
		for(it=mp.begin();it!=mp.end();it++){
			if((*it).second == 2){
				temp=(*it).first;
				count++;
			}
		}
		if(count==0)
			cout << "Case #" << iter++ << ": Volunteer cheated!";
		else if(count > 1)
			cout << "Case #" << iter++ << ": Bad magician!";
		else
			cout << "Case #" << iter++ << ": " << temp;
		cout << endl;
		
	}
	return 0;
}
