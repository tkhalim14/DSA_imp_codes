// C++ program to demonstrate min heap for priority queue
#include <iostream>
#include <queue>
using namespace std;
  
void showpq(
    priority_queue<int, vector<int>, greater<int> > gq)
{
    priority_queue<int, vector<int>, greater<int> > g = gq;
    while (!g.empty()) {
        cout << '\t' << g.top();
        g.pop();
    }
    cout << '\n';
}
  
// Driver Code
int main()
{
    priority_queue<int, vector<int>, greater<int> > gquiz;
    // Highest value gets max priority on top of the queue usually but we can have compare function
    // as 3rd argument during declaration itself.
    // This is min heap mode of priority queue, only the smallest number will appear at top of queue.
    // greater int makes the queue elements align in descending order of value.
    gquiz.push(10);
    gquiz.push(30);
    gquiz.push(20);
    gquiz.push(5);
    gquiz.push(1);
  
    cout << "The priority queue gquiz is : ";
    showpq(gquiz);
  
    cout << "\ngquiz.size() : " << gquiz.size();
    cout << "\ngquiz.top() : " << gquiz.top();
  
    cout << "\ngquiz.pop() : ";
    gquiz.pop();
    showpq(gquiz);
  
    return 0;
}