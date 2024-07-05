#include <iostream>
using namespace std;

void GiaiHPT2an() {
    double a1, b1, c1, a2, b2, c2;
    cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;
    if (a2 == 0) {
        if (a1 == 0) {
            if (b1 / b2 == c1 / c2) {
                cout << "Vo so nghiem";
            } else {
                cout << "Vo nghiem";
            }
        }
    } else if (a1 / a2 == b1 / b2) {
        if (b1 / b2 == c1 / c2) {
            cout << "Vo so nghiem";
        } else {
            cout << "Vo nghiem";
        }
    } else {
        double x = (c1 * b2 - c2 * b1) / (a1 * b2 - b1 * a2);
        double y = (c1 * a2 - c2 * a1) / (b1 * a2 - a1 * b2);
        cout << "x = " << x << ", y = " << y;
    }
}

int main() {
    GiaiHPT2an();
    return 0;
}

