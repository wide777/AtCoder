#include <iostream>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;

    long long cnt[100100] = {0};
    for(int i = 0; i < N; ++i) {
        int a, b;
        cin >> a >> b;
        cnt[a] += b;
    }

    long long id = 0;
    for(int i = 1; i <= 100100; ++i) {
        id += cnt[i];
        if(id >= K) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}