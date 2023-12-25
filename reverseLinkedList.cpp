#include <iostream>

struct ListNode{
    int val;
    ListNode* next;
    ListNode(): val(0), next(nullptr){}
    ListNode(int x) : val(x), next(nullptr){}
    ListNode(int x, ListNode* next): val(x), next(next){}
};

ListNode* reverseList(ListNode* head){

    ListNode *current = head;
    ListNode *prev = nullptr;

    while(current != nullptr){
        ListNode *temp = current->next;

        current->next = prev;
        prev = current;
        current = temp;
    }

    return prev;
    
}