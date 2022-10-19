#include <bits/stdc++.h>

using namespace std;

string plastetris(string vec[])
{

    int cont = 0;
    int infractions = 0;
    for(int f = 0; f < 4; ++f)
    {
        for(int c = 0; c < 4; ++c)
        {
            if(vec[f][c] == 'X')
            {
                cont++;
                if(c < 3 && f < 3)
                {
                    if(cont < 4)
                    {
                        if(vec[f][c+1] != 'X' && vec[f+1][c] != 'X')
                        {
                            infractions++;
                            if(infractions > 1){
                                return "NO";
                            }
                        }
                    }

                }

                if(infractions == 1 && cont == 4 && (c>=3 || f>= 3)){ // extreme cases
                    return "NO";
                }
            }


            if(cont > 4)
            {
                return "NO";
            }


        }
    }

    if(cont == 4){
        return "SI";
    }

    return "NO";


}

int main()
{

    ifstream in("in.txt");
    ofstream out("out.txt");

    string caja[4];

    for(int i = 0; i < 4; ++i)
    {
        in >> caja[i];
    }

    out << plastetris(caja);

    in.close();
    out.close();


    return 0;
}
