#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s[n];
    for(int i = 0; i < n; ++i) cin >> s[i];

    int num_alph[26] = {0};
    for(int i = 0; i < 26; ++i) {
        int m = 1 << 29;
        char alph = 'a' + i;

        for(int j = 0; j < n; ++j) {
            int cnt = 0;
            for(int k = 0; k < (int)s[j].length(); ++k) {
                if(s[j][k] == alph) ++cnt;
            }
            m = min(m, cnt);
        }
        num_alph[i] = m;
    }

    for(int i = 0; i < 26; ++i) {
        for(int j = 0; j < num_alph[i]; ++j) cout << (char)('a' + i);
    }
    puts("");

    return 0;
}