#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int N;
    cin >> N;
    if(108 * N / 100 < 206) {
        cout << "Yay!" << endl;
    } else if(108 * N / 100 == 206) {
        cout << "so-so" << endl;
    } else {
        cout << ":(" << endl;
    }
}