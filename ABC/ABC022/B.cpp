#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    bool rem[100100] = {false};

    int ans = 0;
    for(int i = 0; i < N; ++i) {
        int A;
        cin >> A;
        if(rem[A]) ++ans;
        rem[A] = true;
    }
    cout << ans << endl;

    return 0;
}