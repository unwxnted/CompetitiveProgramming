#include <bits/stdc++.h>

using namespace std;


int lengthOfLongestSubstring(string s) {

    int i = 0, k = 0, maxS = 0;

    unordered_map<char, int> m;

    while(i<s.size()){
        if(m.find(s[i]) != m.end())
            k=max(k, m[s[i]]+1);
        m[s[i]]= i;
        maxS= max(maxS, i-k+1);
        i++;
    }
    return maxS;

}

int main(){

    cout << lengthOfLongestSubstring("") << endl;
}
