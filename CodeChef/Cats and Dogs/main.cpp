#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream in("in.txt");
    ofstream out("out.txt");

    int cases;
    int dogs;
    int cats;
    int legs;

    in >> cases;

    for(int j = 0; j < cases; ++j){
        in >> cats;
        in >> dogs;
        in >> legs;

        if(legs == dogs*4 || legs == dogs*4+cats*4){
            cout << "yes" << endl;
        }else{
            cout << "no" << endl;
        }

    }


    return 0;
}
