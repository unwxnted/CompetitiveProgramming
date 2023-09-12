#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a;
    double b;
    for(int i = 0; i < n; ++i){
        cin >> a;
        b=180-a;
        b=360/b;
        if(b!=floor(b))cout << "NO" << endl;
        else cout << "YES" << endl;
    }
    return 0;
}
