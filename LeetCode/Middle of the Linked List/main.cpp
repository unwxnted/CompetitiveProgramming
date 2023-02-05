#include <bits/stdc++.h>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


ListNode* middleNode(ListNode* head)
{

    ListNode* t = head;
    ListNode* k = head;

    while(t->next != nullptr)
    {

        if(t->next->next != nullptr)
        {
            t= t->next->next;
        }
        else
        {
            t=t->next;
        }
        k= k->next;
    }

    return k;

}
