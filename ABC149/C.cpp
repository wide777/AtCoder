#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int n;
    cin >> n;

    int MAX = 100003;
    vector<int> a(MAX + 1, 0);
    for(int i = 2; i <= MAX; i++) {
        if(a[i] == 0) {
            a[i] = 1;
            for(int j = 2; j <= MAX; j++) {
                if(i * j > MAX) break;
                a[i * j] = -1;
            }
        }
    }

    for(int i = n; i <= MAX; i++) {
        if(a[i] == 1) {
            cout << i << endl;
            break;
        }
    }
}