#include <bits/stdc++.h>

using namespace std;

Node* recursive(Node* r)
{
    if(r->left == NULL)
        return r;

    Node* tempLeft = r->left;
    Node* tempRight = r->right;
    tempLeft->next = tempRight;
    tempRight->next = r->next ? r->next->left : NULL;

    r->left = recursive(tempLeft);
    r->right = recursive(tempRight);
    return r;
}

Node* connect(Node* root)
{
    if(!root)
        return root;
    root->next = NULL;


    root = recursive(root);
    return root;
}
