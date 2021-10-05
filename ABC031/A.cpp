#include <iostream>
using namespace std;

int main() {
    int A, D;
    cin >> A >> D;
    cout << (min(A, D) + 1) * max(A, D) << endl;

    return 0;
}