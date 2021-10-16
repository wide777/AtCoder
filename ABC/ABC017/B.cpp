#include <iostream>
using namespace std;

int main() {
    string X;
    cin >> X;

    string ans = "YES";
    for(int i = 0; i < (int)X.size(); ++i) {
        if(X[i] != 'c' && X[i] != 'o' && X[i] != 'k' && X[i] != 'u') {
            ans = "NO";
        }

        if(X[i] == 'c') {
            if(++i < (int)X.size()) {
                if(X[i] != 'h') ans = "NO";
            } else {
                ans = "NO";
            }
        }
    }
    cout << ans << endl;

    return 0;
}