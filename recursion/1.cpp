#include <iostream>
#include <vector>
using namespace std;

void test(int a){
    if (a==1)
    {
        cout<<a;
        return;
    }
    
    test(a-1);
    cout<<a;

    

}

int main(int argc, char const *argv[])
{
    test(10);
    return 0;
}
