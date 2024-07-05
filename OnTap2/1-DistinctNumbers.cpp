#include<iostream>
using namespace std;

void DistinctNumbers() {
    int prenumber = 0;
    while (true) {
        int n;
        cin >> n;
        if (n < 0) {
            cout << n;
            break;
        }
        if (n != prenumber) {
            cout << n << " ";
        }

        prenumber = n;
    }
}

int main() {
    DistinctNumbers();
    return 0;
}
