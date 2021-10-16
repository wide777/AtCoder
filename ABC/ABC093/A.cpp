#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    vector<int> cnt(3, 0);
    REP(i, s.length()) {
        if(s[i] == 'a') {
            cnt[0]++;
        } else if(s[i] == 'b') {
            cnt[1]++;
        } else if(s[i] == 'c') {
            cnt[2]++;
        }
    }
    if(all_of(cnt.begin(), cnt.end(), [](int x) { return x == 1; })) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
}