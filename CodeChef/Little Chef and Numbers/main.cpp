#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream in("in.txt");
    ofstream out("out.txt");

    int cases;
    int cant;
    int cont;

    in >> cases;

    for(int j = 0; j < cases; ++j){

        in >> cant;
        int a[cant];
        cont = 0;
        for(int i = 0; i < cant; ++i){
            in >> a[i];
        }

        for(int i = 0; i < cant; ++i){
            for(int k = i; k < cant; ++k){
                if(i!=k){
                    if(a[i] * a[k] > a[i] + a[k]){
                        cont++;
                    }
                }
            }
        }

        out << cont << endl;

    }

    in.close();
    out.close();

    return 0;
}
