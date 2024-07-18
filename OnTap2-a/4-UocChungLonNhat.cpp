#include<iostream>
using namespace std;

int gcd(int x, int y) {
    if (y == 0) {
        return x;
    }
    return gcd(y, x % y);
}

int main() {
    int x, y;
    cin >> x >> y;
    int ucln = gcd(x, y);
    if (ucln < 0) {
        cout << -ucln;
    } else {
        cout << ucln;
    }
    return 0;
}
