#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    int ans = 0;
    for(int i = 0; i <= 100; ++i) {
        if((A <= i && C <= i) && (i < B && i < D)) ++ans;
    }
    cout << ans << endl;

    return 0;
}