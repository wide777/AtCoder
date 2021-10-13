#include <iostream>
using namespace std;

int main() {
    int N, M, X, Y;
    cin >> N >> M >> X >> Y;
    int a[N], b[M];
    for(int i = 0; i < N; ++i) cin >> a[i];
    for(int i = 0; i < M; ++i) cin >> b[i];

    int ans = 0;
    int j = 0;
    for(int i = 0; i < N;) {
        while(j < M && a[i] + X > b[j]) ++j;
        if(j < M) ++ans;
        else break;
        while(i < N && a[i] < b[j] + Y) ++i;
    }
    cout << ans << endl;

    return 0;
}