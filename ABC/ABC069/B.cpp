#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    cout << s[0] << s.size() - 2 << s[(int)s.size() - 1] << endl;
    
    return 0;
}