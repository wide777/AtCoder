#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; ++i) cin >> a[i];

    sort(a, a + N);
    cout << a[N - 1] - a[0] << endl;

    return 0;
}