#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int MOD = 1000000007;

int main() {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;

    ll maxnum = a * c;
    if(a * d > maxnum) maxnum = a * d;
    if(b * c > maxnum) maxnum = b * c;
    if(b * d > maxnum) maxnum = b * d;

    cout << maxnum << endl;
}