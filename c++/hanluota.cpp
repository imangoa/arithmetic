#include <iostream>
#include <vector>
using namespace std;

void move(char a,char b)
{
    cout<< a << " move to "<<b<<endl;
}

void hanluo(char a,char b,char c,int n)
{
    if(n==1)
    {
        move(a,c);
        return ;
    }
    hanluo(a,c,b,n-1);
    hanluo(a,b,c,1);
    hanluo(c,b,a,n-1);
}


int main(){
    hanluo('a','b','c',11);
    return 1;
}