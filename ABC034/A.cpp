#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    if(x < y) {
        puts("Better");
    } else {
        puts("Worse");
    }

    return 0;
}