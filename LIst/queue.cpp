#include <iostream>
#include <vector>
using namespace std;

const int MAXSIZE =5;

struct queue
{
    int len;
    int nums[MAXSIZE];
    int front,rear;
    queue(): len(0),front(0),rear(0){};
};

int isfull(queue &q)
{
    if (q.len==MAXSIZE)
        return 1;
    else 
        return 0;
    
}
int isempty(queue &q)
{
    if (q.len==0)
        return 1;
    else
        return 0;
    
}

int enqueue(queue &q,int val){
    if (isfull(q))
        return 9999;
    q.nums[q.rear]=val;
    q.rear=(q.rear+1)%MAXSIZE;
    q.len++;
}

int dequeue(queue &q){
    if ((isempty(q)))
        return 9999;
    q.front=(q.front+1)%MAXSIZE;
    q.len--;
}

int main(int argc, char const *argv[])
{
    queue q;
    enqueue(q,1);
    enqueue(q,2);
        enqueue(q,3);
    enqueue(q,4);
    enqueue(q,5);
    dequeue(q);
    dequeue(q);
    enqueue(q,6);
    enqueue(q,7);

    return 0;
}
