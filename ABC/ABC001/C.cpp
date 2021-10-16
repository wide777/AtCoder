#include <iostream>
using namespace std;

int main() {
    int Deg, Dis;
    cin >> Deg >> Dis;
    Deg *= 10;

    string Dir;
    if(Deg < 1125) Dir = "N";
    else if(Deg < 3375) Dir = "NNE";
    else if(Deg < 5625) Dir = "NE";
    else if(Deg < 7875) Dir = "ENE";
    else if(Deg < 10125) Dir = "E";
    else if(Deg < 12375) Dir = "ESE";
    else if(Deg < 14625) Dir = "SE";
    else if(Deg < 16875) Dir = "SSE";
    else if(Deg < 19125) Dir = "S";
    else if(Deg < 21375) Dir = "SSW";
    else if(Deg < 23625) Dir = "SW";
    else if(Deg < 25875) Dir = "WSW";
    else if(Deg < 28125) Dir = "W";
    else if(Deg < 30375) Dir = "WNW";
    else if(Deg < 32625) Dir = "NW";
    else if(Deg < 34875) Dir = "NNW";
    else Dir = "N";
    
    int W;
    if(Dis < 2 * 6 + 3) W = 0;
    else if(Dis < 15 * 6 + 3) W = 1;
    else if(Dis < 33 * 6 + 3) W = 2;
    else if(Dis < 54 * 6 + 3) W = 3;
    else if(Dis < 79 * 6 + 3) W = 4;
    else if(Dis < 107 * 6 + 3) W = 5;
    else if(Dis < 138 * 6 + 3) W = 6;
    else if(Dis < 171 * 6 + 3) W = 7;
    else if(Dis < 207 * 6 + 3) W = 8;
    else if(Dis < 244 * 6 + 3) W = 9;
    else if(Dis < 284 * 6 + 3) W = 10;
    else if(Dis < 326 * 6 + 3) W = 11;
    else W = 12;

    if(W == 0) Dir = "C";
    cout << Dir << " " << W << endl;

    return 0;
}