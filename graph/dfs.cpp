#include <iostream>
#include <vector>
using namespace std;



#define MAXVEX  100 /* 最大顶点数，应由用户定义 */
#define INFINITY   65535  /* 表示权值的无穷*/

typedef  int EdgeType; /* 边上的权值类型应由用户定义 */
typedef  char VertexType; /* 顶点类型应由用户定义  */

typedef  struct
{
    VertexType vexs[MAXVEX]; /* 顶点表 */
    EdgeType arc[MAXVEX][MAXVEX]; /* 邻接矩阵，可看作边表 */
     int numNodes, numEdges; /* 图中当前的顶点数和边数  */
} MGraph;


#define MVNum 100                //最大顶点数
typedef struct ArcNode           //边结点
{
	int adjvex;                  //该边所指向的顶点的位置
	struct ArcNode *nextarc;     //指向下一条边的指针
	int info;              //和边相关的信息(权值等)
}ArcNode;


typedef struct VNode
{
	VertexType data;         //顶点信息
	ArcNode *firstarc;       //指向第一条依附该顶点的边的指针
}VNode,AdjList[MVNum];








const int MAX_VERTEX_NUM = 10;

struct Graph{
    int val;

};
void visit(int x){
    cout<<x;
}

int FirstNeighbour(Graph g,int v){

}

int Neighbour(Graph g,int v,int w)
{

}

bool visited[MAX_VERTEX_NUM];

// 从定点v出发
void DFS(Graph G,int v){
    visit(v);
    visited[v]=true;
    for(int w=FirstNeighbour(G,v);w>=0;w=Neighbour(G,v,w))
    {
        if (!visited[w])
        {
            DFS(G,w);
        }
        
    }

}

void BFS(Graph G,int v)
{
    visit(v);


}