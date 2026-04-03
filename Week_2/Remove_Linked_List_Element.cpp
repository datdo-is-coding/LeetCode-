#include<iostream>

using namespace std;

typedef struct ListNode{
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
}ListNode;

ListNode* head = NULL;
void add(int val){
    ListNode* node = &ListNode(val);
    if(head == NULL){
        head = node;
    }
    ListNode* tmp = head;
    while(tmp -> next != NULL){
        tmp -> next = node;
    }
}
void print(){
    
}
int main(){
    add(1);
    add(2);
    add(3);

    return 0;
}