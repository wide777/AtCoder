#include <iomanip>
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int h = N / 3600;
    N -= h * 3600;
    int m = N / 60;
    N -= m * 60;
    int s = N;

    cout << setfill('0') << right << setw(2) << h << ":";
    cout << setfill('0') << right << setw(2) << m << ":";
    cout << setfill('0') << right << setw(2) << s << endl;

    return 0;
}