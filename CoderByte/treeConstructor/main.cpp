#include <iostream>
#include <string>
using namespace std;

bool TreeConstructor(string strArr[], int arrLength) {

  string aux[arrLength*2];
  for(int i = 0; i < arrLength; ++i){
    aux[i] = strArr[i][3];
  }

  int cont;

  for(int i = 0; i < arrLength*2; ++i){
    cont = 0;
    for(int j = 1; j < (arrLength*2)-1; ++j){
      if(aux[i] == aux[j]){
        cont += 1;
      }
    }
    if(cont >= 2){
      return false;
    }
  }

  // code goes here
  return true;

}

int main() {

  // keep this function call here
  string A[] = {"(1,2)", "(3,2)", "(2,12)", "(5,2)"};
  int arrLength = sizeof(A) / sizeof(*A);
  cout << TreeConstructor(A, arrLength);
  return 0;

}
