#include <iostream>
#include <vector>
using namespace std;

int N, K;
int ans = 1 << 30;
vector<int> choise;

void rec(int now = 0) {
    if(now >= N) {
        ans = min(ans, now);
        return;
    }

    for(auto x : choise) {
        if(now == 0 && x == 0) continue;
        rec(now * 10 + x);
    }
}

int main() {
    cin >> N >> K;
    vector<bool> V(10, true);
    for(int i = 0; i < K; ++i) {
        int D;
        cin >> D;
        V[D] = false;
    }

    for(int i = 0; i < 10; ++i) {
        if(V[i]) choise.push_back(i);
    }

    rec();
    cout << ans << endl;

    return 0;
}