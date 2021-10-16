#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    int sum = 0, M = 0;
    REP(i, n) {
        int l;
        cin >> l;
        sum += l;
        M = max(M, l);
    }
    if(M < sum - M) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}