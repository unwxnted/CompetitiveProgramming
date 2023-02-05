#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* removeNthFromEnd(ListNode* head, int n)
{


    ListNode* temp = new ListNode();
    temp->next = head;
    ListNode* k = temp;
    ListNode* t = temp;


    for(int i = 0; i <n; ++i)
    {
        k = k->next;
    }


    while(k->next!=NULL)
    {
        k = k->next;
        t= t->next;
    }


    if(t->next->next==NULL)
    {
        t->next = NULL;
    }
    else
    {
        t->next=t->next->next;
    }


    return temp->next;
}
