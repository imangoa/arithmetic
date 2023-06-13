#include<iostream>
using namespace std;
void Hanoi(int n, char A, char B, char C){//汉罗塔函数，n表示当前的盘子数，A,B,C表示三个柱子
    if (n == 1){//如果只有一个盘子
        cout << A << "->" << C << endl;//直接移动到目标盘子
    }
    else{
        Hanoi(n - 1, A, C, B);//将当前所有盘子上面的 n-1 个盘子从 A 柱移动到 B 柱，其中 C 柱为辅助柱
        cout << A << "->" << C << endl;//将当前最后一个盘子移动到目标柱 C
        Hanoi(n - 1, B, A, C);//将 n-1 个盘子从 B 柱移动到目标柱 C，其中 A 柱为辅助柱
    }
}
int main(){
    int n;
    cout << "请输入汉罗塔的层数：" << endl;
    cin >> n;
    Hanoi(n, 'A', 'B', 'C');//调用汉罗塔函数
    return 0;
}
