#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int Q;
    cin >> Q;
    priority_queue<ll> Que;
    vector<ll> Sum(Q + 1);

    REP(i, Q) {
        int P, X;
        cin >> P;

        Sum[i + 1] += Sum[i];
        if(P == 1) {
            cin >> X;
            Que.push(-X + Sum[i + 1]);
        } else if(P == 2) {
            cin >> X;
            Sum[i + 1] += X;
        } else if(P == 3) {
            ll m = Que.top();
            Que.pop();
            cout << Sum[i + 1] - m << endl;
        }
    }
}