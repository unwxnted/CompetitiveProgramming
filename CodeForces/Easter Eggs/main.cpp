#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string c = "ROYGBIV";
    string k = "";
    int j = 0;
    for(int i = 0; i < n; ++i){
        if(j >= c.size()){
            j=j-4;
        }
        k+=c[j];
        j++;

    }
    cout << k << endl;
    return 0;
}
