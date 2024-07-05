#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

bool SoChinhPhuong(int n) {
    double q = (double) sqrt(n);
    if (n < 0 || q != (int) q) {
        return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    if (SoChinhPhuong(n)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}
