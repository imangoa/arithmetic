#include <iostream>
#include <vector>
using namespace std;

const int MAXSIZE =100;
struct stack
{
    int len;
    int nums[MAXSIZE];
    stack(): len(0){};
};


int push(stack &s,int data){
    if (s.len>=99)
        return 999;
    s.nums[s.len]=data;
    s.len++;
    return 0;

}

int pop(stack &s){
    if(s.len<=0)
        return 999;
    s.len--;
    int data = s.nums[s.len];
    return data;
}

int main(int argc, char const *argv[])
{
    stack s;
    push(s,1);
    push(s,2);
    int a1 = pop(s);
    int a2 = pop(s);
    int a3 = pop(s);
    return 0;
}




