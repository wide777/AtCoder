#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> a(N);
    for(auto &x : a) cin >> x;

    vector<int> vals = a;
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    for(int i = 0; i < N; ++i) {
        a[i] = lower_bound(vals.begin(), vals.end(), a[i]) - vals.begin();
        cout << a[i] << endl;
    }

    return 0;
}