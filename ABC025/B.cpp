#include <iostream>
using namespace std;

int main() {
    int N, A, B;
    cin >> N >> A >> B;

    int now = 0;
    for(int i = 0; i < N; ++i) {
        string s;
        int d;
        cin >> s >> d;

        int proc;
        if(d < A) proc = A;
        else if(A <= d && d <= B) proc = d;
        else if(B < d) proc = B;

        if(s == "East") now += proc;
        if(s == "West") now -= proc;
    }

    if(now > 0) cout << "East " << now << endl;
    else if(now < 0) cout << "West " << -now << endl;
    else cout << 0 << endl;

    return 0;
}