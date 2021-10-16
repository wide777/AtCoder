#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define REP(i, n) for(int i = 0; i < (int)(n); i++)

int main() {
    int A, B, C;
    cin >> A >> B >> C;
    if(C % 2 == 0) {
        if(abs(A) > abs(B)) {
            cout << ">" << endl;
        } else if(abs(A) == abs(B)) {
            cout << "=" << endl;
        } else {
            cout << "<" << endl;
        }
    } else {
        if(A < 0) {
            if(B > 0) {
                cout << "<" << endl;
            } else {
                if(abs(A) > abs(B)) {
                    cout << "<" << endl;
                } else if(abs(A) == abs(B)) {
                    cout << "=" << endl;
                } else {
                    cout << ">" << endl;
                }
            }
        } else if(A > 0) {
            if(B > 0) {
                if(abs(A) > abs(B)) {
                    cout << ">" << endl;
                } else if(abs(A) == abs(B)) {
                    cout << "=" << endl;
                } else {
                    cout << "<" << endl;
                }
            } else {
                cout << ">" << endl;
            }
        } else {
            if(B > 0) {
                cout << "<" << endl;
            } else if(B < 0) {
                cout << ">" << endl;
            } else {
                cout << "=" << endl;
            }
        }
    }
}