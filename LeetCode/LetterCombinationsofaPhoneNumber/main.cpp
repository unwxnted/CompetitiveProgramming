#include <bits/stdc++.h>

using namespace std;

int main()
{

    fstream in("in.txt");

    char dos[3] = {'a', 'b', 'c'};
    char tres[3]= {'d', 'e', 'f'};
    char cuatro[3]= {'g', 'h', 'i'};
    char cinco[3]= {'j', 'k', 'l'};
    char seis[3]= {'m', 'n', 'o'};
    char siete[4]= {'p', 'q', 'r', 's'};
    char ocho[3]= {'t', 'u', 'v'};
    char nueve[4]= {'w', 'x', 'y', 'z'};

    string nums;
    in >> nums;

    int numsLenght = nums.size();

    char combNums[numsLenght];

    for(int i = 0; i < numsLenght; ++i)
    {
        combNums[i] = nums[i];
    }

    int numsComb = 0;
    for(int i = 0; i < numsLenght; ++i)
    {
        if(combNums[i] != '7' && combNums[i] != '9')
        {
            numsComb+= 3;
        }
        else
        {
            numsComb+= 4;
        }
    }

    vector <char>  letters;
    for(int i = 0; i < numsLenght; ++i)
    {
        switch(combNums[i])
        {
        case '2':
            for(int j = 0; j < (sizeof(dos)/sizeof(dos[0])); ++j)
            {
                letters.push_back(dos[j]);
            }
            break;
        case '3':
            for(int j = 0; j < (sizeof(tres)/sizeof(tres[0])); ++j)
            {
                letters.push_back(tres[j]);
            }
            break;
        case '4':
            for(int j = 0; j < (sizeof(cuatro)/sizeof(cuatro[0])); ++j)
            {
                letters.push_back(cuatro[j]);
            }
            break;
        case '5':
            for(int j = 0; j < (sizeof(cinco)/sizeof(cinco[0])); ++j)
            {
                letters.push_back(cinco[j]);
            }
            break;
        case '6':
            for(int j = 0; j < (sizeof(seis)/sizeof(seis[0])); ++j)
            {
                letters.push_back(seis[j]);
            }
            break;
        case '7':
            for(int j = 0; j < (sizeof(siete)/sizeof(siete[0])); ++j)
            {
                letters.push_back(siete[j]);
            }
            break;
        case '8':
            for(int j = 0; j < (sizeof(ocho)/sizeof(ocho[0])); ++j)
            {
                letters.push_back(ocho[j]);
            }
            break;
        case '9':
            for(int j = 0; j < (sizeof(nueve)/sizeof(nueve[0])); ++j)
            {
                letters.push_back(nueve[j]);
            }
            break;


        }
    }

    string out = "";

    for(int i = 0; i < numsComb/2; ++i)
    {

        for(int j = numsComb/2; j < numsComb; ++j)
        {
            out += letters[i];
            out += letters[j];
        }
    }

    cout << out;


    return 0;
}
