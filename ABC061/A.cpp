#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if(A <= C && C <= B) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}