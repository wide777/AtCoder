#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int d, n;
    cin >> d >> n;
    if(n != 100) {
        cout << n * pow(100, d) << endl;
    } else {
        if(d == 0) {
            cout << 101 << endl;
        } else if(d == 1) {
            cout << 10100 << endl;
        }else{
            cout << 1010000 << endl;
        }
    }
}