#include <iostream>
using namespace std;

void Kangaroo() {
    int x1, v1, x2, v2;
    cin >> x1 >> v1 >> x2 >> v2;
    if (v1 == v2) {
        cout << "NO";
    } else {
        double t = (double) (x1 - x2) / (v2 - v1);
        if (t == (int) t && t > 0) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }
}

int main() {
    Kangaroo();
    return 0;
}
