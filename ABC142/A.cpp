#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    if(n % 2 == 0) {
        cout << fixed << setprecision(7) << (n / 2) / (double)n << endl;
    } else {
        cout << fixed << setprecision(7) << (n / 2 + 1) / (double)n << endl;
    }
}