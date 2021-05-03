#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    unordered_set<string> s;
    REP(i, n) {
        string username;
        cin >> username;
        if(!s.count(username)) {
            cout << i + 1 << endl;
            s.insert(username);
        }
    }
}