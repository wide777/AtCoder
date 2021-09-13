#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int X, Y;
    char d;
    cin >> X >> d >> Y;
    if(0 <= Y && Y <= 2) {
        cout << X << '-' << endl;
    } else if(3 <= Y && Y <= 6) {
        cout << X << endl;
    } else {
        cout << X << '+' << endl;
    }
}