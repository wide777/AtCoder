#include <iostream>
using namespace std;

int main() {
    string S;
    cin >> S;

    int cnt[6] = {0};
    for(int i = 0; i < (int)S.length(); ++i) ++cnt[S[i] - 'A'];

    for(int i = 0; i < 6; ++i) {
        if(i != 0) cout << " ";
        cout << cnt[i];
    }
    cout << endl;

    return 0;
}