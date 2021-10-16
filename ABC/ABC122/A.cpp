#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    char c, res;
    cin >> c;
    if(c == 'A')
        res = 'T';
    else if(c == 'C')
        res = 'G';
    else if(c == 'G')
        res = 'C';
    else
        res = 'A';
    cout << res << endl;
}