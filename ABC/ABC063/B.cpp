#include <iostream>
#include <set>
using namespace std;

int main() {
    string S;
    cin >> S;

    set<char> st;
    for(int i = 0; i < (int)S.length(); ++i) {
        st.insert(S[i]);
    }

    if(S.length() == st.size()) {
        puts("yes");
    } else {
        puts("no");
    }

    return 0;
}