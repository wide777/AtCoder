#include <iostream>
using namespace std;

int main() {
    int A, B;
    cin >> A >> B;

    if(A + B < 10) {
        cout << A + B << endl;
    } else {
        puts("error");
    }

    return 0;
}