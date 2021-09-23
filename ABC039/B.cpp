#include <iostream>
using namespace std;

int main() {
    int X;
    cin >> X;

    for(int i = 1; i < 1000; ++i) {
        if(i * i * i * i == X) {
            cout << i << endl;
            break;
        }
    }

    return 0;
}