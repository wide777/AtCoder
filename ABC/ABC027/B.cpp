#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int sum = 0;
    int a[N];
    for(auto &i : a) {
        cin >> i;
        sum += i;
    }

    if(sum % N != 0) {
        cout << -1 << endl;
        return 0;
    }

    int mean = sum / N;
    int ans = 0;
    for(int i = 0; i < N - 1; ++i) {
        if(a[i] != mean) {
            ++ans;
            a[i + 1] += a[i] - mean;
        }
    }
    cout << ans << endl;

    return 0;
}