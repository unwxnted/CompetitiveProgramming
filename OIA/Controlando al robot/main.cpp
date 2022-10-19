#include <bits/stdc++.h>

using namespace std;

int main()
{

    string intrucciones;

    cin >> intrucciones;

    int sentido = 2;
    int cont = 0;

    for(auto i : intrucciones){

        cont++;

        if(i == 'H'){
            sentido++;
        }else{
            sentido--;
        }

        if(sentido == 4 || sentido == -1){
            cout << cont;
            return 0;
        }

    }

    cout << -1;


    return 0;
}
