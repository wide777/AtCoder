#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define rep(i, n) for(int i = 0; i < (int)(n); i++)
#define all(x) (x).begin(), (x).end()

const int MOD = 1000000007;

int main() {
    int n;
    cin >> n;
    vector<pair<int, int>> d(n);
    rep(i, n) {
        cin >> d.at(i).first;
        cin >> d.at(i).second;
    }

    bool res = false;
    rep(i, n - 2) {
        if(d.at(i).first == d.at(i).second) {
            if(d.at(i + 1).first == d.at(i + 1).second) {
                if(d.at(i + 2).first == d.at(i + 2).second) {
                    res = true;
                }
            }
        }
    }

    if(res)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}