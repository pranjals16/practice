#include <iostream>
#include<vector>
#include<queue>
#include<algorithm>

using namespace std;
int main() {
	priority_queue<int, vector<int>, greater<int> > q;
	q.push(10);
	q.push(40);
	q.push(5);
	while(!q.empty()){
		cout << q.top() << endl;
		q.pop();
	}
	return 0;
}
