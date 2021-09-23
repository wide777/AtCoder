#include <deque>
#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    deque<char> o;
    for(int i = 0; i < (int)s.length(); ++i) {
        if(s[i] == 'B') {
            if(!o.empty()) o.pop_back();
        } else {
            o.push_back(s[i]);
        }
    }

    for(auto c : o) cout << c;
    puts("");

    return 0;
}