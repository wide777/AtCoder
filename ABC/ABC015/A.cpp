#include <iostream>
using namespace std;

int main() {
    string A, B;
    cin >> A >> B;
    cout << ((A.size() > B.size()) ? A : B) << endl;

    return 0;
}