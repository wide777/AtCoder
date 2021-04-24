#include <bits/stdc++.h>
using namespace std;

int main() {
    string S;
    cin >> S;

    int count = 0;
    if(S == "SSS") {
        count = 0;
    } else if(S == "RSS" || S == "SRS" || S == "SSR" || S == "RSR") {
        count = 1;
    } else if(S == "RRS" || S == "SRR") {
        count = 2;
    } else if(S == "RRR") {
        count = 3;
    }
    cout << count << endl;
}
