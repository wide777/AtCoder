#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";
    for(int i = 0; i < (int)s.size(); ++i) {
        ans += s[i];
        int cnt = 1;
        for(; i < (int)s.size() - 1 && s[i] == s[i + 1]; ++i, ++cnt) ;
        ans += to_string(cnt);
    }
    cout << ans << endl;

    return 0;
}