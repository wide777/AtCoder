#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int MOD = 1000000007;

int main() {
    int a, b;
    cin >> a >> b;
    cout << (float)(a - b) / a * 100 << endl;
}