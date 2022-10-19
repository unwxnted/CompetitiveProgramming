#include <bits/stdc++.h>

using namespace std;

int main()
{

    fstream in ("in.txt");
    fstream out("out.txt");

    int cases;
    int patys;
    int buns;

    in >> cases;

    for(int i = 0; i< cases; ++i){

        in >> patys;
        in >> buns;

        if(patys>buns){
            out << buns << endl;
        }else{
            out << patys << endl;
        }

    }


    in.close();
    out.close();


    return 0;
}
