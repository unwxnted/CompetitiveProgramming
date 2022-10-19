#include <iostream>
#include<vector>
#include<string>

using namespace std;

void duplilong(vector<string> &palabras, int K, vector<int> & longitudes)
{

    for(int i = 0; i < K; ++i)
    {
        longitudes[i] = palabras[i].size();
    }

    for(int i = 0;  i < K  ; i++)
    {
        palabras[palabras.size()-1-i] += palabras[palabras.size()-1-i];
    }

}
