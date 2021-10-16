#include <bits/stdc++.h>
using namespace std;

int main() {
    int A, B, C, X;
    cin >> A >> B >> C >> X;

    int count = 0;
    for(int i = 0; i < A + 1; i++) {
        for(int j = 0; j < B + 1; j++) {
            for(int k = 0; k < C + 1; k++) {
                if(500 * i + 100 * j + 50 * k == X) {
                    count++;
                }
            }
        }
    }

    cout << count << endl;
}
