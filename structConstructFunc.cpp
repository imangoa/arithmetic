#include <iostream>
#include <vector>
using namespace std;


struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

struct Student{
    int id;
    string name;
    Student(): id(1){
        cout<<"1234";
        }
    Student(int x): id(x),name("1234"){}
    Student(int x,string name): id(x),name(name){}

};

int main()
{
    ListNode *cur = new ListNode(1);
    Student();
    return 0;
}