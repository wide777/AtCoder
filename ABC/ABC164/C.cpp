#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    string s;
    set<string> x;
    REP(i, n) {
        cin >> s;
        x.insert(s);
    }
    cout << x.size() << endl;
}