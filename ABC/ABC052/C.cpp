#include <atcoder/modint>
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace atcoder;
using namespace std;
using ll = long long;
using mint = modint1000000007;

unordered_map<ll, ll> Map;

void prime_factorize(ll N) {
    for(ll a = 2; a * a <= N; ++a) {
        if(N % a != 0) continue;
        ll ex = 0;
        while(N % a == 0) {
            ++ex;
            N /= a;
        }
        Map[a] += ex;
    }
    if(N != 1) ++Map[N];
}

int main() {
    ll N;
    cin >> N;

    for(int i = 2; i <= N; ++i) prime_factorize(i);

    mint ans = 1;
    for(auto [key, value] : Map) {
        ans *= (value + 1);
    }
    cout << ans.val() << endl;

    return 0;
}