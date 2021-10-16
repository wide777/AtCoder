#include <iostream>
using namespace std;

int main() {
    int c[26] = {0};
    string s;
    cin >> s;

    for(int i = 0; i < (int)s.length(); ++i) ++c[s[i] - 'a'];
    
    for(int i = 0; i < 26; ++i) {
        if(c[i] % 2 == 1) {
            puts("No");
            return 0;
        }
    }
    puts("Yes");

    return 0;
}