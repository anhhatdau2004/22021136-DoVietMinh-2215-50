#include <iostream>
#include <string>
using namespace std;

void BinaryString(int n, string s) {
    if (s.length() == n) {
        cout << s << endl;
        return;
    }

    BinaryString(n, s + "0");
    BinaryString(n, s + "1");
}

int main() {
    int n;
    cin >> n;
    BinaryString(n, "");
    return 0;
}
