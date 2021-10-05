#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;
    int c = lcm(a, b);
    cout << (n + c - 1) / c * c << endl;

    return 0;
}