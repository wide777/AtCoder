#include <iostream>
using namespace std;

int main() {
    string O, E;
    cin >> O >> E;

    for(int i = 0; i < (int)E.length(); ++i) cout << O[i] << E[i];
    if(O.length() != E.length()) cout << O[O.length() - 1];
    puts("");

    return 0;
}