#include <iostream>
#include <set>
using namespace std;

int main() {
    string s;
    int k;
    cin >> s >> k;

    int slen = (int)s.length();
    set<string> st;
    for(int i = 0; i < slen - k + 1; ++i) {
        st.insert(s.substr(i, k));
    }
    cout << st.size() << endl;

    return 0;
}