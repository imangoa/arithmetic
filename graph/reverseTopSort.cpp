#include <iostream>
#include <vector>
#define MaxSize 100
using namespace std;

struct graph
{
    int a[MaxSize][MaxSize];
    int n;
};
vector<int> output;

int visited[4];
void reverseTopSort(graph*g,int cur){
       if (visited[cur]==1) {
        return;
    }
        // cout<<cur;
        visited[cur]=1;
    for (int i = 0; i < g->n; i++)
    {
        if (g->a[cur][i]!=0)
        {
            reverseTopSort(g,i);
        }
        
    }
    cout<<cur;
    
}


int main(int argc, char const *argv[])
{
    graph g;
    g.n =4;
    for (int i = 0; i < g.n; i++)
    {
        for (int j = 0; j < g.n; j++)
        {
            g.a[i][j]=0;

            
        }
        
    }
    g.a[0][1]=1;
    g.a[0][2]=1;
    g.a[1][3]=1;
    reverseTopSort(&g,0);
    return 0;
}
