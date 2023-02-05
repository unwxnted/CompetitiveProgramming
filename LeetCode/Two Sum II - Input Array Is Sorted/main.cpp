#include <bits/stdc++.h>

using namespace std;

vector<int> twoSum(vector<int>& numbers, int target)
{
    map <int, int> m;
    map <int, int> l;
    vector <int> k;

    for(int i = 0; i < numbers.size(); ++i)
    {
        m[numbers[i]] = numbers[i];
    }

    for(int i = 0; i < numbers.size(); ++i)
    {
        l[numbers[i]] = i;
    }

    for(int i = 0; i < numbers.size(); ++i)
    {
        if( numbers[i] + m[target-numbers[i]] == target && l[target-numbers[i]] != i)
        {
            k.push_back(i+1);
            k.push_back(l[target-numbers[i]]+1);
            return k;
        }
    }

    return k;
}



int main()
{
    return 0;
}
