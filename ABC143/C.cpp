#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, ans = 0;
    string s;
    cin >> n >> s;
    for(int i = 0; i < (int)s.size(); i++, ans++) {
        while(s[i] == s[i + 1]) i++;
    }
    cout << ans << endl;
}