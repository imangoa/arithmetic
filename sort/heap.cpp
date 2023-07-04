#include <iostream>
#include <vector>
using namespace std;


// 插入堆
void heapInsert(int arr[],int index){
    while (arr[index]>arr[(index-1)/2])   //如果当前节点大于父节点，
    {
        swap(arr[index],arr[(index-1)/2]);
        index = (index-1)/2;  // 当前节点与父节点交换，与爷节点比较
    }
    
}

void heapify(int arr[],int parentIndex,int size ){
    int left = 2*parentIndex+1;
    while (left<size)
    {
        int childMax = left+1<size&&arr[left+1]>arr[left]?left+1:left;
        if (arr[parentIndex]>arr[childMax])
            break;
        swap(arr[parentIndex],arr[childMax]);
        parentIndex =childMax;
        left = 2*parentIndex+1;
    }
    
}

void heapSort(int arr[],int size) {
        if (arr == nullptr || size < 2) {
            return;
        }
        for (int i = 0; i < size; i++) {
            heapInsert(arr, i);
        }
        swap(arr[0], arr[--size]);
        while (size > 0) {
            heapify(arr, 0, size);
            swap(arr[0], arr[--size]);
        }
    }