#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double x, xp, xk, dx , F , b , a , c;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    
    cout << fixed;

    cout << "----------------------" << endl;
    cout << "|" << setw(7) << "x" << " |" << setw(10) << "y" << " |" << endl;
    cout << "----------------------" << endl;

    x = xp;
    while (x <= xk) {

        if (a<0 && c!= 0) { F = a*pow(x, 2) + b*x + c;}
        else if (a>0 && c == 0) { F = (-a)/(x-b); }
        else  { F = a*(x+c); }

        
        cout << "|" << setw(7) << setprecision(2) <<x
             << " |" << setw(10) << setprecision(3) << F
             << " |" << endl;

        x += dx;
    }

    cout << "----------------------" << endl;

    cin.get();
    return 0;
}



