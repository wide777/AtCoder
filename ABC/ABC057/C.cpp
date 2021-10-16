#include <iostream>
#include <vector>
using namespace std;
using ll = long long;

vector<ll> enum_divisors(ll N) {
    vector<ll> res;
    for(ll i = 1; i * i <= N; ++i) {
        if(N % i != 0) continue;
        res.push_back(i);
        if(N % i != i) res.push_back(i);
    }
    return res;
}

int num_digit(int N) {
    string S = to_string(N);
    return (int)S.size();
}

int main() {
    ll N;
    cin >> N;
    vector<ll> D = enum_divisors(N);

    int ans = 1 << 30;
    for(auto d : D) {
        ll A = d, B = N / d;
        ans = min(ans, max(num_digit(A), num_digit(B)));
    }
    cout << ans << endl;

    return 0;
}