#include<iostream>
using namespace std;

void matran(int n) {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ( (j + i - 1) % n == 0) {
                cout << n << " ";
            } else {
                cout << (j + i - 1) % n << " ";
            }
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    matran(n);
    return 0;
}
