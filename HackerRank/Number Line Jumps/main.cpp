#include <iostream>
#include <bits/stdc++.h>

using namespace std;

/**

1 3 2 1

**/

string kangaroo(int x1, int v1, int x2, int v2) {

    int pos1 = x1;
    int pos2 = x2;

    for(int i = 0; i < 10000; ++i){

       if(pos1 == pos2){
        return "YES";
       }
       pos1+=v1;
       pos2+=v2;
    }



    return "NO";

}

int main()
{

    int x1, x2, v1, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    cout << kangaroo(x1, v1, x2, v2);
    return 0;
}
