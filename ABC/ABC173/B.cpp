#include <bits/stdc++.h>
using namespace std;
using ll = long long;

#define REP(i, n) for(int i = 0; i < (int)(n); i++)
#define ALL(x) (x).begin(), (x).end()

int main() {
    int n;
    cin >> n;

    string s;
    int c0 = 0, c1 = 0, c2 = 0, c3 = 0;
    REP(i, n) {
        cin >> s;
        if(s == "AC")
            c0++;
        else if(s == "WA")
            c1++;
        else if(s == "TLE")
            c2++;
        else if(s == "RE")
            c3++;
    }

    cout << "AC x " << c0 << endl;
    cout << "WA x " << c1 << endl;
    cout << "TLE x " << c2 << endl;
    cout << "RE x " << c3 << endl;
}