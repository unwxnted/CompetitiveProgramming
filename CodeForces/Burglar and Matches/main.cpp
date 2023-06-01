#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    map<int, int> m;
    for (int i = 0; i < k; ++i) {
        int a, b;
        cin >> a >> b;
        m[b] += a;
    }

    int totalMatches = 0;
    for (auto it = m.rbegin(); it != m.rend(); ++it) {
        int matchboxesTaken = min(n, it->second);
        totalMatches += matchboxesTaken * it->first;
        n -= matchboxesTaken;
        if (n <= 0) {
            break;
        }
    }

    cout << totalMatches << endl;

    return 0;
}
