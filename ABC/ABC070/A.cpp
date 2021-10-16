#include <iostream>
using namespace std;

int main() {
    string N;
    cin >> N;
    if(N[0] == N[2]) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}