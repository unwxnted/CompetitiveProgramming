#include <iostream>
#include<fstream>

using namespace std;

int main()
{

    ifstream in("in.txt");
    ofstream out("out.txt");

    int cases;
    int cont;
    string palabra;
    string aux;

    in >> cases;
    for(int k = 0; k < cases; ++k)
    {
        in >> palabra;
        cont = 0;
        aux = "";
        for(int i = 0; i < palabra.size(); ++i)
        {
            aux +=palabra[i];
            if(aux == "010" || aux == "101")
            {
                aux = "";
                cont++;
            }
        }

        if(cont >= 1)
        {
            out << "Good" << endl;
        }
        else
        {
            out << "Bad" << endl;
        }


    }




    return 0;
}
