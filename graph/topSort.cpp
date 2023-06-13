#include <iostream>
#include <vector>
#include <queue>
#define Max 100
using namespace std;

struct graph
{
    int a[Max][Max];
    int n;
};

int inDegree[Max];
vector<int> output;
queue<int> topsort;
vector<int> TopSort(graph *g){
    for (int i = 0; i < g->n; i++)
    {
        for (int j = 0; j < g->n; j++)
        {
            if (g->a[i][j]!=0)
            {
                inDegree[j]++;      
            }
            
        }
         
    }
    for (int i = 0; i < g->n; i++)
    {
        if (inDegree[i]==0)
        {
            topsort.push(i);
        }
    }
    while (!topsort.empty())
    {
        int cur =topsort.front();
        topsort.pop();
        output.push_back(cur);
        for(int i=0;i<g->n;i++){
            if (i!=cur&&g->a[cur][i])   //不对本身进行处理
            {
                g->a[cur][i]=0;
                inDegree[i]--;
                if (inDegree==0)
                {
                    topsort.push(i);
                }
                
            }
            
        }
    }
    return output;
    
    
    
}