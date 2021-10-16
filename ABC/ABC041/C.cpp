#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<pair<int, int>> a(N);
    for(int i = 0; i < N; ++i) {
        cin >> a[i].first;
        a[i].second = i + 1;
    }

    sort(a.begin(), a.end(), greater<pair<int, int>>());
    for(auto i : a) cout << i.second << endl;

    return 0;
}