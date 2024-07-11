#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int a, b;
    cin >> a >> b;
    int bcnn;
    if (a == 0 || b == 0) {
        bcnn = 0;
    } else {
        bcnn = a * b / gcd(a, b);
        if (bcnn < 0) {
            bcnn = -bcnn;
        }
    }
    cout << bcnn;
    return 0;
}
