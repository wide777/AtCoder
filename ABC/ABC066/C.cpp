#include <algorithm>
#include <deque>
#include <iostream>
using namespace std;

int main() {
    // Step1: Input
    int n;
    cin >> n;
    deque<int> ans;
    for(int i = 0; i < n; ++i) {
        int a;
        cin >> a;
        if(i % 2 == 0) {
            ans.push_front(a);
        } else {
            ans.push_back(a);
        }
    }

    // Step2: Output
    if(n % 2 == 0) reverse(ans.begin(), ans.end());
    for(int i = 0; i < n; ++i) {
        if(i != 0) cout << " ";
        cout << ans.front();
        ans.pop_front();
    }
    cout << endl;

    return 0;
}