#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b;
    cin >> a >> b;

    int res = 0;
    for(int i = a; i <= b; i++) {
        string s = to_string(i);
        string t = s;
        reverse(t.begin(), t.end());
        if(s == t) res++;
    }

    cout << res << endl;
}