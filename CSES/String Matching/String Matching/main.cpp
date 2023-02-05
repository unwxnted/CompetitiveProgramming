#include <bits/stdc++.h>

using namespace std;

void solve(){

    string s, k;
    cin >> s >> k;
    int n = s.size();
    int p = k.size();
    int ap = 0;
    bool g = false;

    for(int i = 0; i < n; ++i){
        if(s[i] == k[0]){
            for(int l = 0; l < p; ++l){
                g = false;
                if(s[i+l] != k[l]){
                    g = false;
                    break;
                }else{
                    g = true;
                }
            }

            if(g){
                ap++;
            }
        }

    }

    cout << ap << endl;

}


int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    solve();

    return 0;
}
