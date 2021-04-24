#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    int M1 = 0, M2 = 0;
    REP(i, n) {
        cin >> a[i];
        if(a[i] > M1) {
            M1 = a[i];
        } else {
            if(a[i] > M2) {
                M2 = a[i];
            }
        }
    }

    REP(i, n) {
        if(a[i] != M1) {
            cout << M1 << endl;
        } else {
            cout << M2 << endl;
        }
    }
}