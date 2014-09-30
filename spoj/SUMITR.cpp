#include <iostream>
using namespace std;int b[105][105],t,n,i,j;main(){cin >> t;while(t--){cin >> n;for(i=1;i<=n;i++){for(j=1;j<=i;j++){cin >> b[i][j];b[i][j]=max(b[i-1][j],b[i-1][j-1])+b[i][j];}}int a=0;for(i=1;i<=n;i++)a=max(a,b[n][i]);cout<<a<<endl;}return 0;}
