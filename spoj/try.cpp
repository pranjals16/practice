#include <queue>
#include <iostream>
 
using namespace std;
 
 
int main()
{
    priority_queue<int, std::vector<int>, std::greater<int> > minHeap;
 
    minHeap.push(10);
    minHeap.push(5);
    minHeap.push(12);
    minHeap.push(3);
    minHeap.push(3);
    minHeap.push(4);
 
    while ( !minHeap.empty()){
        cout << minHeap.top() << " ";
        minHeap.pop();
    }
    return 0;
}
