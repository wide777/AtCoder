#include <iostream>
using namespace std;

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    int rank[3] = {1, 1, 1};

    if(A < B) ++rank[0];
    if(A < C) ++rank[0];
    if(B < A) ++rank[1];
    if(B < C) ++rank[1];
    if(C < A) ++rank[2];
    if(C < B) ++rank[2];

    for(int i = 0; i < 3; ++i) cout << rank[i] << endl;

    return 0;
}