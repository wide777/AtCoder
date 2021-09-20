#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[N];
    for(int i = 0; i < N; ++i) {
        cin >> a[i];
        --a[i];
    }

    int flash = 0;
    for(int i = 1; i <= N; ++i) {
        flash = a[flash];
        if(flash == 1) {
            cout << i << endl;
            return 0;
        }
    }
    cout << -1 << endl;

    return 0;
}