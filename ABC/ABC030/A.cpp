#include <iostream>
using namespace std;

int main() {
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    if(B * C > D * A) {
        puts("TAKAHASHI");
    } else if(B * C < D * A) {
        puts("AOKI");
    } else {
        puts("DRAW");
    }

    return 0;
}