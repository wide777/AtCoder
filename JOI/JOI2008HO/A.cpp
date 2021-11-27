#include <iostream>
#include <deque>
using namespace std;

int main() {
    int n;
    cin >> n;

    deque<pair<int, int>> deq;
    for(int i = 1; i <= n; ++i) {
        int s;
        cin >> s;
        if(i == 1) {
            deq.push_back({s, 1});
            continue;
        }

        if(s == deq.back().first) {
            int num = deq.back().second + 1;
            deq.pop_back();
            deq.push_back({s, num});
        } else {
            if(i % 2 == 1) {
                deq.push_back({s, 1});
            } else {
                int num = deq.back().second + 1;
                deq.pop_back();
                if(!deq.empty()) {
                    num += deq.back().second;
                    deq.pop_back();
                }
                deq.push_back({s, num});
            }
        }
    }

    int ans = 0;
    for(auto [c, num] : deq) {
        if(c == 0) ans += num;
    }
    cout << ans << endl;

    return 0;
}