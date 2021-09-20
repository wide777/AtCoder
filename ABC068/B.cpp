#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int ans = 1, mcnt = 0;
    for(int i = 1; i <= N; ++i) {
        int a = i, cnt = 0;
        while(1) {
            if(a % 2 == 0) {
                a /= 2;
                ++cnt;
            } else {
                break;
            }
        }
        if(cnt > mcnt) {
            mcnt = cnt;
            ans = i;
        }
    }
    cout << ans << endl;

    return 0;
}