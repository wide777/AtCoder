#include <iostream>
#include <set>
using namespace std;

int main() {
    int X[5];
    cin >> X[0] >> X[1] >> X[2] >> X[3] >> X[4];

    set<int> st;
    for(int i = 0; i < 3; ++i) {
        for(int j = i + 1; j < 4; ++j) {
            for(int k = j + 1; k < 5; ++k) {
                st.insert(X[i] + X[j] + X[k]);
            }
        }
    }

    int cnt = 0;
    for(auto i : st) {
        if(cnt == (int)st.size() - 3) {
            cout << i << endl;
            break;
        }
        ++cnt;
    }

    return 0;
}