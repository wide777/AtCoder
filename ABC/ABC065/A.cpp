#include <iostream>
using namespace std;

int main() {
    int X, A, B;
    cin >> X >> A >> B;

    if(A - B >= 0) {
        puts("delicious");
    } else if(B - A <= X) {
        puts("safe");
    } else {
        puts("dangerous");
    }

    return 0;
}