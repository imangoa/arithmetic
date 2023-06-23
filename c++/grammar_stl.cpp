#include <iostream>
#include <vector>
using namespace std;



int main(int argc, char const *argv[])
{
    int n = 10;
    vector<int> b(n) ;
    vector<int> a={1,2,3,45};
    int i=0;
    for (int i = 0; i < 10; i++)
    {
        b[i]=i;
    }
    
    cout<<a[i++];
    return 0;
}
