#include <iostream>
#include <vector>
using namespace std;

const int N=8;
int board[N][N];
int cnt = 0;

bool check(int row,int col){
 for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) return false; // 检查同一列
        if (col - row + i >= 0 && board[i][col - row + i] == 1) return false; // 检查左上角到右下角的对角线
        if (col + row - i < N && board[i][col + row - i] == 1) return false; // 检查右上角到左下角的对角线
    }
    return true;
}

void backtrace(int row){
    if (row==N)
    {
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout<<board[i][j]<<' ';
            }
            cout<<endl;
            
        }
        
    }
    for (int col = 0; col < N; col++)
    {
        if (check(row,col))
        {
            board[row][col] = 1; // 放置皇后
            backtrace(row+1);
            board[row][col] = 0; 
        }

        
    }
    
    
}

int main(){
    backtrace(0);
}