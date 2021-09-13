#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int Q;
    cin >> Q;
    queue<int> q;
    priority_queue<int, vector<int>, greater<int>> pq;
    REP(i, Q) {
        int query;
        cin >> query;
        if(query == 1) {
            int x;
            cin >> x;
            q.push(x);
        } else if(query == 2) {
            if(!pq.empty()) {
                cout << pq.top() << endl;
                pq.pop();
            }else{
                cout<<q.front()<<endl;
                q.pop();
            }
        } else if(query == 3) {
            while(!q.empty()) {
                pq.push(q.front());
                q.pop();
            }
        }
    }

    return 0;
}