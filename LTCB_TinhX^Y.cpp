#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int y;

    cout << "Nhap x (so thuc): ";
    cin >> x;

    cout << "Nhap y (so tu nhien): ";
    cin >> y;

    double result = pow(x, y);
    cout << "Ket qua : " << result << endl;

    return 0;
}
