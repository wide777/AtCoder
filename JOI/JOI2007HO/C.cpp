#include <iostream>
#include <set>
using namespace std;

int main() {
    int n;
    cin >> n;
    pair<int, int> c[n];
    set<pair<int, int> > s;
    for(int i = 0; i < n; ++i) {
        cin >> c[i].first >> c[i].second;
        s.insert({c[i].first, c[i].second});
    }

    int ans = 0;
    for(int i = 0; i < n - 1; ++i) {
        for(int j = i + 1; j < n; ++j) {
            int x1 = c[i].first, y1 = c[i].second;
            int x2 = c[j].first, y2 = c[j].second;
            int x3 = x1 + (y1 - y2), y3 = y1 + (x2 - x1);
            int x4 = x2 + (y1 - y2), y4 = y2 + (x2 - x1);
            if(s.count({x3, y3}) && s.count({x4, y4})) {
                ans = max(ans, (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
            }
        }
    }
    cout << ans << endl;

    return 0;
}