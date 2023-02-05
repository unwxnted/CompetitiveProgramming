#include <bits/stdc++.h>

using namespace std;

bool checkInclusion(string s1, string s2)
{
    if(s2.size()<s1.size()) return false;
    multiset<char> ms1,ms2;
    ms1.insert(s1.begin(),s1.end());
    ms2.insert(s2.begin(),s2.begin()+s1.size());
    if(ms1==ms2) return true;
    for(int i=s1.size(); i<s2.size(); i++)
    {
        ms2.insert(s2[i]);
        ms2.erase(ms2.find(s2[i-s1.size()]));
        if(ms2==ms1) return true;
    }
    return false;
}

int main()
{


    cout << checkInclusion("hello", "ooolleoooleh") << endl;
}
