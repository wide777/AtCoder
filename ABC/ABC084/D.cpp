#include <iostream>
#include <vector>
using namespace std;

vector<bool> Eratosthenes(int N) {
    vector<bool> isPrime(N + 1, true);
    isPrime[0] = isPrime[1] = false;

    for(int p = 2; p <= N; ++p) {
        if(!isPrime[p]) continue;
        for(int q = p * 2; q <= N; q += p) {
            isPrime[q] = false;
        }
    }
    return isPrime;
}

int main() {
    int N = 1e5;
    int Q;
    cin >> Q;

    vector<bool> isPrime = Eratosthenes(N);
    vector<int> cusum(N + 1);
    for(int i = 1; i <= N; ++i) {
        cusum[i] = cusum[i - 1] + (isPrime[i] && isPrime[(i + 1) / 2]);
    }
    while(Q--) {
        int l, r;
        cin >> l >> r;
        cout << cusum[r] - cusum[l - 1] << endl;
    }

    return 0;
}