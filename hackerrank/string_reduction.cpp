#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */

int stringReduction(string a) {
	int n=a.size();
	bool flag=true;
	for(int i=1;i<n;i++){
		if(a[i-1]!=a[i])
			flag=false;;
	}
	if(flag) return n;
	
	vector<int> count(3,0);
	for(int i=0;i<n;i++)
		count[a[i]-'a']++;
	if(n%2==0){
		for(int i=0;i<3;i++){
			if(count[i]%2!=0)
				return 1;
		}
		return 2;
	}
	else{
		for(int i=0;i<3;i++){
			if(count[i]%2==0)
				return 1;
		}
		return 2;
	}
	return 1;
}

int main() {
    int res, t, i;
    scanf("%d",&t);
    string a;
    for (i=0;i<t;i++) {
        cin >> a;
        res=stringReduction(a);
        printf("%d\n",res);  
    }
    
    return 0;
}

