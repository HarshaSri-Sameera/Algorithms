#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // Priority queue gives the elements in descending order
    priority_queue<int>qu;
    qu.push(10);
    qu.push(20);
    qu.push(40);
    qu.push(30);
    while(!qu.empty()){
        cout<<qu.top()<<" ";
        qu.pop();
    }
    cout<<"\n";

    // To print the queue in ascending order multiply with -1
    priority_queue<int>que;
    que.push(-1*10);
    que.push(-1*20);
    que.push(-1*40);
    que.push(-1*30);
    while(!que.empty()){
        cout<<que.top()*-1<<" ";
        que.pop();
    }
    return 0;
}
