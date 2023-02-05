#include <bits/stdc++.h>

using namespace std;

void reverseString(vector<char>& s) {

    int medium = (s.size()+1)/2;
    int i = 0;
    int k = s.size()-1;

    while(i <= medium && k >= medium){
        swap(s[i], s[k]);
        i++;
        k--;

    }

}

int main()
{
    int n;
    cin >> n;
    vector<char> s(n);

    for(int i = 0; i < n; ++i){
        cin >> s[i];
    }

    reverseString(s);

    return 0;
}
