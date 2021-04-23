#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

static const int M = 1000000;

int main() {
    int a, b;
    cin >> a >> b;

    int psum = 0, msum = 0;
    vector<int> p, m;
    if(a > b) {
        for(int i = 0; i < a; i++) {
            p.push_back(M - i);
            psum += (M - i);
        }
        for(int i = 0; i < b; i++) {
            if(i != b - 1) {
                m.push_back(i + 1);
                msum += (i + 1);
            } else {
                m.push_back(psum - msum);
            }
        }
    } else {
        for(int i = 0; i < b; i++) {
            m.push_back(M - i);
            msum += (M - i);
        }
        for(int i = 0; i < a; i++) {
            if(i != a - 1) {
                p.push_back(i + 1);
                psum += (i + 1);
            } else {
                p.push_back(msum - psum);
            }
        }
    }

    REP(i, a) cout << p[i] << " ";
    REP(i, b) cout << -m[i] << " ";
    cout << endl;
}