#include <bits/stdc++.h>

using namespace std;


void staircase(int n) {
    string str = "";
    for(int i = 0; i < n; ++i){
        str+= " ";
    }

    for(int i = n-1; i >= 0; --i){
       str[i] = '#';
       cout << str << endl;
    }

}



int main()
{

    int n;
    cin >> n;
    staircase(n);

    return 0;
}
