#include <iostream>
using namespace std;

int main() {
    int n, X;
    cin >> n >> X;
    int a[n];
    for(auto &i : a) cin >> i;

    int sum = 0;
    for(int i = 0; i < n; ++i) {
        if(X & (1 << i)) sum += a[i];
    }
    cout << sum << endl;

    return 0;
}