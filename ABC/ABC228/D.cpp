#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main() {
    int Q;
    cin >> Q;

    const long long N = (1 << 20);
    vector<long long> A(N, -1);
    set<int> s;
    for(int i = 0; i < N; ++i) s.insert(i);

    for(int i = 0; i < Q; ++i) {
        long long t, x;
        cin >> t >> x;
        if(t == 1) {
            auto iter = s.lower_bound(x % N);
            if(iter == s.end()) {
                iter = s.lower_bound(0);
            }
            A[*iter] = x;
            s.erase(*iter);
        } else if(t == 2) {
            cout << A[x % N] << endl;
        }
    }

    return 0;
}