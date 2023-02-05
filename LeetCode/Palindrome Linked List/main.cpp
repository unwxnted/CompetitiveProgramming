#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(ListNode* head)
{

    vector<int> v;

    while(head != NULL)
    {
        v.push_back(head->val);
        head = head->next;
    }

    int n = v.size()-1;

    for(int i = 0; i < n+1/2; ++i)
    {
        if(v[i]!=v[n-i]) return false;
    }

    return true;

}
