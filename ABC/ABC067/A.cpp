#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if(A % 3 == 0 || B % 3 == 0 || (A + B) % 3 == 0) {
        puts("Possible");
    } else {
        puts("Impossible");
    }

    return 0;
}