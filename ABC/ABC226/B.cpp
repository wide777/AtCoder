#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;

    set<vector<int>> s;
    REP(i, N) {
        int L;
        cin >> L;
        vector<int> vec;
        REP(j, L) {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        s.insert(vec);
    }

    cout << s.size() << endl;

    return 0;
}