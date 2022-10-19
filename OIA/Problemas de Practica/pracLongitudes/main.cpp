#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> dameLongitudes(vector<string> v)
{
    vector <int> longs;
    for(auto i : v)
    {
        longs.push_back(i.size());
    }
    return longs;
}
