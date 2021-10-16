#include <iostream>
using namespace std;

int main() {
    int W, H;
    cin >> W >> H;
    if(3 * W == 4 * H) {
        puts("4:3");
    } else {
        puts("16:9");
    }

    return 0;
}