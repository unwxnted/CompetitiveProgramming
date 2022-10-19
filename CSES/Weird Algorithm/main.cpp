#include <iostream>

using namespace std;

long tt(long num){

    if(num%2==0)
        return num = num / 2;

    return num = (num*3)+1;

}

int main()
{
    long num;
    cin >> num;

    cout << num << " ";
    while(num != 1 && num >= 1){

        num = tt(num);

    cout << num << " ";
    }

}
