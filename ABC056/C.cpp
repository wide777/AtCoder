#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    long long Y[100001];
    Y[0] = 0;
    for(int i = 1; i <= 100000; ++i) {
        Y[i] += Y[i - 1] + i;
    }

    for(int i = 1; i <= 100000; ++i) {
        if(Y[i] >= X) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}