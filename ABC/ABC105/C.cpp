#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    string S = (N == 0 ? "0" : "");
    while(N != 0) {
        if(N % (-2) == 0) {
            S += '0';
        } else {
            S += '1';
            --N;
        }
        N /= (-2);
    }
    reverse(S.begin(), S.end());
    cout << S << endl;

    return 0;
}