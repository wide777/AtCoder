#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S[N];
    int P[N];

    int sum = 0;
    for(int i = 0; i < N; ++i) {
        cin >> S[i] >> P[i];
        sum += P[i];
    }

    for(int i = 0; i < N; ++i) {
        if(P[i] > sum / 2) {
            cout << S[i] << endl;
            return 0;
        }
    }
    cout << "atcoder" << endl;

    return 0;
}