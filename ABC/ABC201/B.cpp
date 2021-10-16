#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    vector<pair<int, string> > st(n);
    REP(i, n) cin >> st[i].second >> st[i].first;
    sort(st.begin(), st.end(), greater<pair<int, string> >());
    cout << st[1].second << endl;
}