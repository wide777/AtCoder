#include <iostream>
using namespace std;

int main() {
    char c[5] = {'a', 'i', 'u', 'e', 'o'};
    string W;
    cin >> W;

    for(int i = 0; i < (int)W.size(); ++i) {
        if(W[i] == c[0] || W[i] == c[1] || W[i] == c[2] || W[i] == c[3] ||
           W[i] == c[4]) {
            continue;
        }
        cout << W[i];
    }
    cout << endl;

    return 0;
}