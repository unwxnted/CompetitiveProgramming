#include <bits/stdc++.h>

using namespace std;

long long zetadieta(int C, int P, int G){
    long long cc, pp, gg;
    cc=ceil((double)C/27);
    cc*=105;
    pp=ceil((double)P/30);
    pp*=120;
    gg=(G*9);
    return (long long)(cc+pp+gg);

}

