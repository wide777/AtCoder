#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int MOD = 1000000007;

int main() {
    string s;
    cin >> s;
    if(s.at(s.size() - 1) == 's') {
        cout << s << "es" << endl;
    } else {
        cout << s << "s" << endl;
    }
}