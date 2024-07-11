#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

void GiaiPTbac2() {
    double a, b, c;
    cin >> a >> b >> c;
    double delta = b * b - 4 * a * c;
    if (delta > 0) {
        cout << setprecision(2) << fixed << (-b - sqrt(delta)) / (2 * a) << endl;
        cout << setprecision(2) << fixed << (-b + sqrt(delta)) / (2 * a) << endl;
    } else if (delta == 0) {
        cout << setprecision(2) << fixed << (-b) / (2 * a) << endl;
    } else {
        cout << setprecision(2) << fixed << (-b) / (2 * a) << " ";
        cout << setprecision(2) << fixed << -sqrt(-delta) / (2 * a) << endl;
        cout << setprecision(2) << fixed << (-b) / (2 * a) << " ";
        cout << setprecision(2) << fixed << +sqrt(-delta) / (2 * a) << endl;
    }
}

int main() {
    GiaiPTbac2();
    return 0;
}
