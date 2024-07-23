#include <iostream>
#include <string>
using namespace std;

void BinaryString(int n, int m, string s) {
    if (n == 0 && m == 0) {
        cout << s << endl;
        return;
    }
    if (n > 0) {
        BinaryString(n - 1, m, s + "0");
    }
    if (m > 0) {
        BinaryString(n, m - 1, s + "1");
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    BinaryString(n, m, "");
    return 0;
}
