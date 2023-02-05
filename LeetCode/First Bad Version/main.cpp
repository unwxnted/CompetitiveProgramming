#include <bits/stdc++.h>

using namespace std;


int firstBadVersion(int n)
{
    int s=1;
    int end=n;
    int ans=0;
    int  mid=s+(end-s)/2;
    while(s<=end)
    {
        bool flag=isBadVersion(mid);
        if(flag==false)
        {
            s=mid+1;
        }
        if(flag==true)
        {
            end=mid-1;
            ans=mid;
        }
        mid=s+(end-s)/2;
    }
    return ans;
}

