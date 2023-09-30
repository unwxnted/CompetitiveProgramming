#include <string>
#include <vector>

using namespace std;

string preguntar(int i);

int rec(int n){
    if(preguntar(n) == "igual") return n;
    else if(preguntar(n) == "menor") return rec(n+1);
    else return rec(n-1);
    return -1;   
}

int adivina(){
    return rec(5);
}
