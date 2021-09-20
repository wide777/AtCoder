#include <iostream>
using namespace std;

int main() {
    // Step1: Input
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; ++i) cin >> a[i];

    // Step2: Check each factor (Is odd num? Is mul of 4?)
    int cnt_odd = 0, cnt_mul4 = 0;
    for(int i = 0; i < N; ++i) {
        if(a[i] % 2 == 1) ++cnt_odd;
        if(a[i] % 4 == 0) ++cnt_mul4;
    }

    // Step3: Output
    if(cnt_odd == cnt_mul4 + 1 && cnt_odd + cnt_mul4 == N) {
        puts("Yes");
    } else if(cnt_odd <= cnt_mul4) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}