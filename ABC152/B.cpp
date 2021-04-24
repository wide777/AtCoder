#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;
    string s1 = "", s2 = "";
    REP(i, b) s1 += to_string(a);
    REP(i, a) s2 += to_string(b);

    cout << min(s1, s2) << endl;
}