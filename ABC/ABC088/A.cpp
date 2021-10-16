#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n, a;
    cin >> n >> a;
    if(n % 500 <= a) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}