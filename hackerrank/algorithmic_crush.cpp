#include <map>
#include <set>
#include <list>
#include <cmath>
#include <vector>
#include <cstdio>
#include <string>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define PB push_back
#define MP make_pair
#define abs(x) ((x) > 0 ? (x) : -(x))
typedef long long LL;
int n, m;
vector<pair<int, int> > query;

int main() {
	scanf("%d%d", &n, &m);
	for (int i = 0; i < m; i++) {
		int l, r, w;
		scanf("%d%d%d", &l, &r, &w);
		query.PB(MP(l, w));
		query.PB(MP(r + 1, -w));
	}
	
	sort(query.begin(), query.end());
	LL ret = 0, cur = 0;
		
	for (int i = 0; i < query.size(); ) {
		int j = i;
		while (j < query.size() && query[j].first == query[i].first) {
			cur += query[j].second;
			cout << cur << "*********  " << query[i].first << "******  " << query[i].second << endl;
			j++;
		}
		i = j;
		ret = max(ret, cur);
	}
	cout << ret << endl;
	return 0;
}
