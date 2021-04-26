#include <bits/stdc++.h>
#include <atcoder/all>
using namespace std;
using namespace atcoder;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int a, b, k;
    cin >> a >> b >> k;

    int cnt = 0;
    for(int i = 100; 1 <= i; i--) {
        if(a % i == 0 && b % i == 0) cnt++;
        if(cnt == k) {
            cout << i << endl;
            break;
        }
    }
    return 0;
}