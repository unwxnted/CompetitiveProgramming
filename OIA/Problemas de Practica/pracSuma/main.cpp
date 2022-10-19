#include <iostream>
#include <vector>

using namespace std;

long long suma(vector<int> v)
{
    long long r = 0;
    for(auto i : v)
    {
        r+=i;
    }
    return r;
}
