#include <iostream>
#include <vector>
using namespace std;

vector<long long> prime_factors(long long N) {
    vector<long long> p;

    for(long long i = 2; i * i <= N; ++i) {
        if(N % i != 0) continue;
        while(N % i == 0) {
            p.push_back(i);
            N /= i;
        }
    }
    if(N != 1) p.push_back(N);
    return p;
}

int main() {
    // 入力
    long long N;
    cin >> N;

    // 素因数分解
    vector<long long> p = prime_factors(N);

    // 解の出力
    int ans = 0;
    for(int i = 0; i < 20; ++i) {
        if(1 << i >= p.size()) {
            ans = i;
            break;
        }
    }
    cout << ans << endl;

    return 0;
}