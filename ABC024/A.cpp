#include <iostream>
using namespace std;

int main() {
    int A, B, C, K, S, T;
    cin >> A >> B >> C >> K >> S >> T;

    if(K <= S + T) {
        cout << A * S + B * T - C * (S + T) << endl;
    } else {
        cout << A * S + B * T << endl;
    }

    return 0;
}