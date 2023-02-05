#include <bits/stdc++.h>

using namespace std;


void reverse(vector<int> &nums, int s, int e)
{
    int temp;
    while(s<e)
    {
        temp=nums[s];
        nums[s]=nums[e];
        nums[e]=temp;
        e--;
        s++;

    }
}
void rotate(vector<int>& nums, int k)
{
    while(k>nums.size())
    {
        k=k-nums.size();
    }
    reverse(nums, 0, nums.size()-1);
    reverse(nums,0, k-1);
    reverse(nums,k, nums.size()-1);
}


int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
