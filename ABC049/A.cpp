#include <iostream>
using namespace std;

int main() {
    char vowel[5] = {'a', 'e', 'i', 'o', 'u'};
    char c;
    cin >> c;
    for(int i = 0; i < 5; ++i) {
        if(c == vowel[i]) {
            cout << "vowel" << endl;
            return 0;
        }
    }
    cout << "consonant" << endl;

    return 0;
}