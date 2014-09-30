#include <cstdio>
#include<iostream>
#include<algorithm>
#include<vector>
#include <climits>
#include <cmath>
#include<iomanip>
using namespace std;
const int MAX = 50005;
const double INF = 1e100;
struct point{
	int idx;
	int x;
	int y;
};
struct closest_pair {
	int idx1;
	int idx2;
	double distance;
};

point p[MAX];
point s[MAX];
bool compx(const point &a, const point &b){
	return a.x<b.x;
}
bool compy(const point &a, const point &b){
	return a.y<b.y;
}

closest_pair closest_dist(point p[],int st, int ed){
	if(st>=ed){
		closest_pair res;
		res.distance=INF;
		return res;
	}
	int mid=(st+ed)/2;
	int k=mid;
	while(k>=st && p[k].x==p[mid].x) 
		--k;
	closest_pair res1=closest_dist(p,st,k);
	
	k=mid;
	while(k<=ed && p[k].x==p[mid].x) 
		++k;
	closest_pair res2=closest_dist(p,k,ed);
	
	closest_pair res=res1.distance<res2.distance ? res1 : res2;
	int m=0;
	for(int i=mid;i>=st && p[mid].x-p[i].x<=res.distance;i--)
		s[m++]=p[i];
		
	for(int i=mid+1;i<=ed && p[i].x-p[mid].x<=res.distance;i++)
		s[m++]=p[i];
	sort(s,s+m,compy);
	
	for(int i=0;i<m;i++){
		for(int j=i+1;j<m;j++){
			if(s[j].y-s[i].y > res.distance)
				break;
			double temp=hypot(s[i].x-s[j].x,s[i].y-s[j].y);
			if(temp<res.distance){
				res.distance=temp;
				res.idx1=min(s[i].idx,s[j].idx);
				res.idx2=max(s[i].idx,s[j].idx);
			}
		}
	}
	return res;
}

int main(){
	cout << setiosflags(ios::fixed) << setprecision(6);
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		p[i].idx=i;
		cin >> p[i].x >> p[i].y;
	}
	sort(p,p+n,compx);
	closest_pair res=closest_dist(p,0,n-1);
	cout << res.idx1 << " " << res.idx2 << " " << res.distance << endl;
	return 0;
}
