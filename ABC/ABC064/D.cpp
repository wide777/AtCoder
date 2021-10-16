#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    string S;
    cin >> N >> S;

    int lcnt = 0, rcnt = 0;
    for(int i = 0; i < N; ++i) {
        if(S[i] == '(') {
            ++rcnt;
        } else if(S[i] == ')') {
            if(rcnt == 0) {
                ++lcnt;
            } else {
                --rcnt;
            }
        }
    }
    cout << string(lcnt, '(') + S + string(rcnt, ')') << endl;

    return 0;
}