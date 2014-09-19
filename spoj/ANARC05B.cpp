#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int m,n;
	cin >> m;
	while(m)
	{
		int a[m];
		for(int i=0;i<m;i++)
			cin >> a[i];
		cin >> n;
		int b[n];
		for(int i=0;i<n;i++)
			cin >> b[i];
		
		int suma=0,sumb=0,i=0,j=0,maxsum=0;
		while(i<m && j<n){
			if(a[i]<b[j])
				suma+=a[i++];
				
			else if(a[i]>b[j])
				sumb+=b[j++];

			else{
				maxsum+=max(suma,sumb);
				suma=0,sumb=0;
				while(i<m && j<n && a[i]==b[j]){
					maxsum+=a[i++];
					j++;
				}
			}
		}
		while(i<m)
			suma+=a[i++];
		while(j<n)
			sumb+=b[j++];
		maxsum+=max(suma,sumb);
		cout << maxsum << endl;
		cin >> m;
	}
	return 0;
}
