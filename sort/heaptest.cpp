#include <iostream>
#include <vector>
using namespace std;

void heapInsert(int arr[],int index){
    while(arr[index]>arr[(index-1)/2]){
        swap(arr[index],arr[(index-1)/2]);
        index = (index-1)/2;
    }
}


// 对当前的值进行修改后，调整堆
void heapify(int arr[],int curIndex,int size){
    int left = curIndex*2+1;
    while (left<size)
    {
        int MaxChild = left+1<size&&arr[left+1]>arr[left]?left+1:left;
        if(arr[curIndex]>arr[MaxChild])
            break;   
        swap(arr[curIndex],arr[MaxChild]);
        curIndex = MaxChild;   //此时 arr[MaxChild]的值等于swap前的arr[curIndex]值
        left = curIndex *2+1;

    }    
}

void heapSort(int arr[],int size){
    for (int i = 0; i < size; i++)
        heapInsert(arr,i);
    
    while(size>1){
        swap(arr[0],arr[--size]);
        heapify(arr,0,size);
    }
}

int main()
{
    int arr[11]={1234,134312,314123,5434,1343,23413,314213243,22,2343,1,34};
    heapSort(arr,11);
    return 0;
}