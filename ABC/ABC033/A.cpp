#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;
    for(int i = 1; i < 4; ++i) {
        if(N[0] != N[i]) {
            puts("DIFFERENT");
            return 0;
        }
    }
    puts("SAME");

    return 0;
}