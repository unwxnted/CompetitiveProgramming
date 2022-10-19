#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {

    int sum = 0;
    int b = 0;
    int c = 0;

    for(int i = 0; i < s.size(); ++i){

        if(i == 0){
            string k = "";
            k += s[0];
            k += s[1];
            int aux = stoi(k);
            sum+= aux;
        }

        if(i == 3){
            string j = "";
            j += s[3];
            j += s[4];
            int aux2 = stoi(j);
            b+= aux2;
        }

        if(i == 6){
            string p = "";
            p += s[6];
            p += s[7];
            int aux3 = stoi(p);
            c+= aux3;
        }


        if(s[i] == 'P' && sum < 12){
            sum+=12;
        }

        if(s[i] == 'A' && sum == 12){
            sum-=12;
        }


    }


    string hour = "";
    if(sum > 9)
        hour += to_string(sum);
    else
        hour += "0" + to_string(sum);

    hour+=":";

    if(b > 9)
        hour += to_string(b);
    else
        hour += "0" + to_string(b);

    hour+=":";

    if(c > 9)
        hour += to_string(c);
    else
        hour += "0" + to_string(c);

    return hour;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
