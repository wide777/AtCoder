#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;
    for(int i = n; i < 1000; ++i) {
        if(i == 111 || i == 222 || i == 333 || i == 444 || i == 555 ||
           i == 666 || i == 777 || i == 888 || i == 999) {
            cout << i << endl;
            break;
        }
    }
}