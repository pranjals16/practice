#include <iostream>
#include <algorithm>
using namespace std;

int party(int nItems, int budget, int costs[], int fun[], int& tCost) {
	int matrix[101][501]={0}, picks[101][501]={0};
	for(int i=1; i<=nItems; ++i) {
		for(int j=0; j<=budget; ++j) {
			if(costs[i-1]<=j) {
				matrix[i][j]=max(matrix[i-1][j], fun[i-1]+matrix[i-1][j-costs[i-1]]);
				if(fun[i-1]+matrix[i-1][j-costs[i-1]]>(matrix[i-1][j])) picks[i][j]=1;
				else picks[i][j]=-1;
			}
			else {
				picks[i][j]=-1;
				matrix[i][j]=matrix[i-1][j];
			}
		}
	}
	tCost=0;
	int items=nItems, tbud=budget;
	while(items>0) {
		if(picks[items][tbud]==1) {
			tCost+=costs[items-1];
			--items; tbud-=costs[items];
		} else --items;
	}
	
	return(matrix[nItems][budget]);
}


int main() {
	int budget, nItems;
	cin>>budget>>nItems;
	while(budget!=0 || nItems!=0) {
		if(budget==0 || nItems==0) cout<<"0 0\n";
		int cost[nItems], fun[nItems], tCost, tFun;
		for(int i=0; i<nItems; ++i) cin>>cost[i]>>fun[i];
		tFun=party(nItems, budget, cost, fun, tCost);
		cout<<tCost<<' '<<tFun<<'\n';
		cin>>budget>>nItems;
	}
}
