#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    string s;
    cin >> s;
    string s1 = s.substr(0, 2);
    string s2 = s.substr(2, 2);

    if((1 <= stoi(s1) && stoi(s1) <= 12) && (1 <= stoi(s2) && stoi(s2) <= 12)) {
        cout << "AMBIGUOUS" << endl;
    } else if(1 <= stoi(s2) && stoi(s2) <= 12) {
        cout << "YYMM" << endl;
    } else if(1 <= stoi(s1) && stoi(s1) <= 12) {
        cout << "MMYY" << endl;
    } else {
        cout << "NA" << endl;
    }
}