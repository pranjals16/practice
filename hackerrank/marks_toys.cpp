#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() 
{
    long long n, k; cin >> n >> k;
    vector<int> prices;
    for(int i = 0; i < n; i++)
    {
        int p; cin >> p;
        prices.push_back(p);
    }
    sort(prices.begin(), prices.end());

    int answer = 0;
    int sum=0;
    for(long long i=0;i<n;i++){
        sum+=prices[i];
        if(sum<=k)
	        answer++;
        if(sum>=k)
            break;
    }

    cout << answer << endl;

    return 0;
}

