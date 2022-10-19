#include <bits/stdc++.h>

using namespace std;

int main()
{

    ifstream in("in.txt");
    ofstream out("out.txt");

    int cases;
    in >> cases;
    int r;
    int g;
    int b;
    int mins;

    for(int j = 0; j < cases; ++j){

        in >> r;
        in >> g;
        in >> b;
        in >> mins;
        int ballons[3];
        ballons [0] = 0;
        ballons [1] = 0;
        ballons [2] = 0;

        int cont = 0;
        for(int i = 0; i < r+g+b; ++i){
            ballons[0] += 1;
            cont++;

            if(ballons[0] >= mins){
                break;
            }

            ballons[1] += 1;
            cont++;

            if(ballons[1] >= mins){
                break;
            }

            ballons[2] += 1;
            cont++;

            if(ballons[2] >= mins){
                break;
            }



        }

        out << cont << endl;


    }

    in.close();
    out.close();

    return 0;
}
