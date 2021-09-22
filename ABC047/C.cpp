#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    char prev = s[0];
    int ans = 0;
    for(int i = 1; i < (int)s.length(); ++i) {
        if(prev != s[i]) ++ans;
        prev = s[i];
    }
    cout << ans << endl;

    return 0;
}