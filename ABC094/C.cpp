#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    vector<int> b = a;
    sort(a.begin(), a.end());

    int cent1 = a[n / 2 - 1], cent2 = a[n / 2];
    for(int x : b) {
        if(x <= cent1) {
            cout << cent2 << endl;
        } else {
            cout << cent1 << endl;
        }
    }
}