/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */
struct ListNode
{
    int val;
    ListNode * next;
    ListNode(int a):val(a),next(nullptr){};
};

// @lc code=start
class MyLinkedList {
public:
    MyLinkedList() {
        this->size=0;
        this->head=new ListNode(0);
    }
    
    int get(int index) 
    {
        ListNode *cur;
        cur=this->head;
        int i=0;
        if (index<0)
            return -1;
        while (i<index)
        {
            if (cur->next!=nullptr)
            {
            cur=cur->next;
            i++;
            }
            else{
                return -1;
            }
        }
        return cur->next->val;
        
        
    }
    
    void addAtHead(int val) {
        ListNode *cur;
        cur=this->head;
        ListNode *add = new ListNode(val);
        add->next=cur->next;
        cur->next=add;
        size+=1;
    }
    
    void addAtTail(int val) {
        ListNode *cur;
        cur=this->head;
        while (cur->next!=nullptr)
        {
            cur=cur->next;
        }
        ListNode *add = new ListNode(val);
        cur->next=add;
        size+=1;
    }
    
    void addAtIndex(int index, int val) {
        int i=0;
        ListNode *cur =this->head;
        ListNode *add = new ListNode(val);
        while (i<index&&cur->next!=nullptr)
        {
            cur=cur->next;
            i++;
        }
        if (i==index)
        {
        add->next=cur->next;
        cur->next = add;
        size+=1;  
        }

        
        

        
        
    }
    
    void deleteAtIndex(int index) {
        int i=0;
        ListNode *cur =this->head;
        while (i<index&&cur->next!=nullptr)
        {
            cur=cur->next;
            i++;
        }
        
        if (i==index-1)
        {
        cur->next=cur->next->next;
        size-=1;
        }

    }
    private: 
        int size;
        ListNode *head;

};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end

