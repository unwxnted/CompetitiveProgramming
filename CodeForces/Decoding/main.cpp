#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int n;
    cin >> n;
    cin >> s;

    int k = s.size();
    string r = "";
    bool o = true;
    for(int i = 0; i < k; ++i){
        if(n % 2 == 0){
            if(o) r = s[i] + r;
            if(!o) r+=s[i];
        }else{
            if(o) r+=s[i];
            if(!o) r = s[i] + r;
        }
        o = !o;
    }

    cout << r << endl;

    return 0;
}
