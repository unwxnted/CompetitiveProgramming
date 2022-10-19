#include <bits/stdc++.h>

using namespace std;

int main()
{

    //ifstream in("in.txt");
    //ofstream out("out.txt");

    string dna;
    cin >> dna;

    int cont = 1;
    int maxSequence = 0;
    for(int i = 0; i < dna.size(); ++i){

        if(dna[i] == dna[i+1]){
            cont++;
        }else{
            cont = 1;
        }

        if(cont > maxSequence){
            maxSequence = cont;
        }

    }

    cout << maxSequence;

    //in.close();
    //out.close();

    return 0;
}
