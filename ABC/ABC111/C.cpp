#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main() {
    int n, v;
    cin >> n;
    unordered_map<int, int> Map[2];
    for(int i = 1; i <= n; ++i) {
        cin >> v;
        ++Map[i % 2][v];
    }

    int ans = n;
    if(Map[0].size() == 1 && Map[1].size() == 1) {
        if(Map[0][v] == Map[1][v]) {
            ans = n / 2;
        } else {
            ans = 0;
        }
    } else {
        vector<pair<int, int>> v_even, v_odd;
        for(auto [key, value] : Map[0]) v_even.push_back({value, key});
        for(auto [key, value] : Map[1]) v_odd.push_back({value, key});

        sort(v_even.begin(), v_even.end(), greater<pair<int, int>>());
        sort(v_odd.begin(), v_odd.end(), greater<pair<int, int>>());
        if(v_odd[0].second == v_even[0].second) {
            if(v_odd.size() == 1) {
                ans -= v_odd[0].first + v_even[1].first;
            } else if(v_even.size() == 1) {
                ans -= v_odd[1].first + v_even[0].first;
            } else {
                ans -= v_odd[0].first + max(v_odd[1].first, v_even[1].first);
            }
        } else {
            ans -= v_odd[0].first + v_even[0].first;
        }
    }
    cout << ans << endl;

    return 0;
}