#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    for(int i = 1; i <= B; ++i) {
        if(A * i % B == C) {
            puts("YES");
            return 0;
        }
    }
    puts("NO");

    return 0;
}