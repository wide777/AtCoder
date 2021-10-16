#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<pair<int, int> > a(n);
    REP(i, n) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }
    sort(a.begin(), a.end());
    REP(i, n) {
        if(i) cout << " ";
        cout << a[i].second;
    }
    cout << endl;
}