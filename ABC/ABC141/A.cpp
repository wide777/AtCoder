#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    if(s == "Sunny") {
        cout << "Cloudy" << endl;
    } else if(s == "Cloudy") {
        cout << "Rainy" << endl;
    } else {
        cout << "Sunny" << endl;
    }
}