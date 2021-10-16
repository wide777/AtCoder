#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int MOD = 2025 - N;

    for(int i = 1; i <= 9; ++i) {
        for(int j = 1; j <= 9; ++j) {
            if(i * j == MOD) {
                cout << i << " x " << j << endl;
            }
        }
    }

    return 0;
}