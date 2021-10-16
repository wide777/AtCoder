#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;
    --x, --y;

    int group[12] = {0, 2, 0, 1, 0, 1, 0, 0, 1, 0, 1, 0};
    if(group[x] == group[y]) {
        puts("Yes");
    } else {
        puts("No");
    }

    return 0;
}