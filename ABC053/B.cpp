#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int posA, posZ;

    for(int i = 0; i < (int)s.size(); ++i) {
        if(s[i] == 'A') {
            posA = i;
            break;
        }
    }
    for(int i = (int)s.size() - 1; 0 <= i; --i) {
        if(s[i] == 'Z') {
            posZ = i;
            break;
        }
    }

    cout << posZ - posA + 1 << endl;

    return 0;
}