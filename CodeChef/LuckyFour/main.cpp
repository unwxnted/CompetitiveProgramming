#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream in("in.txt");
    ofstream out("out.txt");

    int cases;
    int cont = 0;
    string number;
    in >> cases;

    for(int i = 0; i < cases; ++i){

        in >> number;
        cont=0;
        for(int j = 0; j < number.size(); ++j){
            if(number[j] == '4'){
                cont++;
            }
        }
        out << cont << endl;
    }

    in.close();
    out.close();

    return 0;
}
