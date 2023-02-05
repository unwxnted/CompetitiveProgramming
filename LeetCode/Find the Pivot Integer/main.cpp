#include <iostream>

using namespace std;

int pivotInteger(int n) {

    int sum = 0;
    for(int i = 1; i <= n; ++i){
        sum = 0;

        for(int k = i; k <= n; ++k){
            sum+=k;
        }

        if((i*(i+1))/2 == sum){ /// 21
            return i;
    }
    }

    return -1;

}



int main()
{
    int n;
    cin >> n;
    cout << pivotInteger(n) << endl;
    return 0;
}
