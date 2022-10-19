#include <bits/stdc++.h>

using namespace std;

/**

4
73
67
38
33

3
84
29
57

**/

vector<int> gradingStudents(vector<int> grades) {

    vector <int> newGrades;

    int cont;
    for(int i = 0; i < grades.size(); ++i){
        if(grades[i]%5 != 0){
            cont  = grades[i];
            while(cont % 5 != 0){
                cont++;
            }

            if(cont-grades[i] < 3 && cont>= 40){
                newGrades.push_back(cont);
            }else{
                newGrades.push_back(grades[i]);
            }

        }else{
            newGrades.push_back(grades[i]);
        }
    }

    return newGrades;
}

int main()
{
    int n;
    cin >> n;
    vector <int> v(n);
    for(int i = 0; i < n; ++i)
        cin >> v[i];

    v = gradingStudents(v);

    cout << "-----" << endl;

    for(int i = 0; i < n; ++i)
        cout << v[i] << endl;


    return 0;
}
