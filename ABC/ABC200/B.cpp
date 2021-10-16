#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    ll n, k;
    cin >> n >> k;
    REP(i, k) {
        if(n % 200 == 0) {
            n /= 200;
        } else {
            string s;
            s = to_string(n) + "200";
            n = stoll(s);
        }
    }
    cout << n << endl;
}