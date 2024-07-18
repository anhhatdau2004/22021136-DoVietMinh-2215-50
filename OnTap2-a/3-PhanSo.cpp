#include<iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void phanso(int a, int b) {
    int ucln = gcd(a, b);
    a = a / ucln;
    b = b / ucln;
    if (b == 1){
        cout << a;
    } else if (a * b < 0 && b < 0) {
        cout << -a << "/" << -b;
    } else {
        cout << a << "/" << b;
    }
}

int main() {
    int a, b;
    cin >> a >> b;
    phanso(a, b);
    return 0;
}