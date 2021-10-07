#include <algorithm>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int T[N];
    for(auto &i : T) cin >> i;
    
    sort(T, T + N);
    cout << T[0] << endl;

    return 0;
}