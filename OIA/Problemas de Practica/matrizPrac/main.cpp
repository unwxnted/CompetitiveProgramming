#include <vector>
#include <iostream>

using namespace std;

void procesaMatriz(vector<vector<int> > matriz, vector<long long> &resultadoEnArreglo, vector<vector<long long> > &resultadoEnMatriz)
{

    long long  suma = 0, cont = 0, maxNum, minNum, product = 1;

    for(auto &item: matriz)
    {

        for(auto &i: item)
        {
            if(cont == 0)
            {
                maxNum = i;
                minNum = i;
            }
            suma+= i;
            product *= i;

            if(i > maxNum)
            {
                maxNum = i;
            }
            if(i < minNum)
            {
                minNum = i;
            }

            cont++;
        }
    }

    resultadoEnArreglo.push_back(suma);
    resultadoEnArreglo.push_back(product);
    resultadoEnArreglo.push_back(maxNum);
    resultadoEnArreglo.push_back(minNum);

    resultadoEnMatriz.resize(2, vector <long long> (0, 2));

    resultadoEnMatriz[0].push_back(suma);
    resultadoEnMatriz[0].push_back(product);
    resultadoEnMatriz[1].push_back(maxNum);
    resultadoEnMatriz[1].push_back(minNum);

}
