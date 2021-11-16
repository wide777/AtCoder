#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N, Q;
    cin >> N >> Q;

    vector<pair<int, int>> train(N + 1);
    REP(iter, Q) {
        int q, x, y;
        cin >> q;
        if(q == 1) {
            cin >> x >> y;
            train[x].second = y;
            train[y].first = x;
        } else if(q == 2) {
            cin >> x >> y;
            train[x].second = 0;
            train[y].first = 0;
        } else if(q == 3) {
            cin >> x;
            deque<int> deq;
            int next = x;
            while(train[next].first != 0) {
                int v = train[next].first;
                deq.push_front(v);
                next = v;
            }
            deq.push_back(x);
            next = x;
            while(train[next].second != 0) {
                int v = train[next].second;
                deq.push_back(v);
                next = v;
            }
            cout << deq.size() << " ";
            for(auto x : deq) cout << x << " ";
            cout << endl;
        }
    }

    return 0;
}