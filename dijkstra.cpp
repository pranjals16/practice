#include <iostream>
#include<vector>
#include<queue>
#include<climits>
#include<algorithm>
#define V 9
using namespace std;
void dijkstra(int graph[V][V],int src){
	int dist[V];
	for(int i=0;i<V;i++)
		dist[i]=100;
	priority_queue<pair<int,int>,vector<pair<int,int> >, greater<pair<int,int> > > q;
	q.push(make_pair(0,0));
	dist[0]=0;
	while(!q.empty()){
		int d=q.top().second;
		int u=q.top().first;
		q.pop();
		if(d<=dist[u]){
			for(int i=0;i<V;i++){
				if(graph[u][i]){
					//cout << u << "----" << i << "------" << graph[u][i] << "--" << dist[i] << endl;
					if(dist[i]> dist[u]+graph[u][i]){
						dist[i]= dist[u]+graph[u][i];
						q.push(make_pair(i,dist[i]));
					}
				}
			}
		}
	}
	for(int i=0;i<V;i++)
		cout << dist[i] << endl;
}
int main() {
	int graph[V][V] = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
		            {4, 0, 8, 0, 0, 0, 0, 11, 0},
		            {0, 8, 0, 7, 0, 4, 0, 0, 2},
		            {0, 0, 7, 0, 9, 14, 0, 0, 0},
		            {0, 0, 0, 9, 0, 10, 0, 0, 0},
		            {0, 0, 4, 0, 10, 0, 2, 0, 0},
		            {0, 0, 0, 14, 0, 2, 0, 1, 6},
		            {8, 11, 0, 0, 0, 0, 1, 0, 7},
		            {0, 0, 2, 0, 0, 0, 6, 7, 0}
		           };

	dijkstra(graph, 0);
	return 0;
}
