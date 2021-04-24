#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, k;
    string s;
    cin >> n >> k >> s;
    s[k - 1] = tolower(s[k - 1]);
    cout << s << endl;
}