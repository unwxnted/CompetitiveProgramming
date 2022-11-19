#include <bits/stdc++.h>

using namespace std;

void solve(){

    int n, t;
    char c;
    string  s;

    cin >> n >> c >> s;
    int l = 0;

    s+=s;
    vector <int> v(s.size());

    if(c == 'g'){
        cout << 5 << endl;
        return;
    }

    for(int i = 0; i < s.size(); ++i){
        if(s[i] == 'g' && (s[i-1] == 'g')){
            cout << i << endl;
            return;
        }else if(s[i] == 'g' && (s[i-1] != 'g')){
            if(l == 0){
                t = i;
            }
            l++;
            v[t] = i+1;
            cout << v[t] << endl << endl;
        }
    }

    if(l > 0){
        cout << v[t] << endl;
    }else{
        cout << -1 << endl;
    }

}

int main(){
    cin.tie(nullptr);
    ios_base::sync_with_stdio(false);
    solve();
}