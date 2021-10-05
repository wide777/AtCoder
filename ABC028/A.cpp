#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    if(N <= 59) {
        puts("Bad");
    } else if(N <= 89) {
        puts("Good");
    } else if(N <= 99) {
        puts("Great");
    } else {
        puts("Perfect");
    }

    return 0;
}