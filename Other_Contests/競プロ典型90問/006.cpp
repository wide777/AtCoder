#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int n, k;
string s;
vector<vector<int> > c(100001, vector<int>(26, 100001));

int main() {
    cin >> n >> k >> s;

    for(int i = n - 1; i >= 0; i--) {
        for(int j = 0; j < 26; j++) {
            if(s[i] == 'a' + j) {
                c[i][j] = i;
            } else {
                c[i][j] = c[i + 1][j];
            }
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < 26; j++) {
            if(n - c[i][j] > k - 1) {
                cout << (char)('a' + j);
                i = c[i][j];
                k--;
                break;
            }
        }

        if(k == 0) break;
    }
    cout << endl;
}