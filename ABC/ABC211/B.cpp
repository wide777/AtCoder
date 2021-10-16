#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    set<string> Set;
    REP(i, 4) {
        string S;
        cin >> S;
        Set.insert(S);
    }

    if(Set.size() == 4) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}