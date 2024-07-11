#include<iostream>
using namespace std;

int result(int a) {
    int b = a;
    int count = 0;
    while (b != 0) {
        int c = b % 10;
        if (c != 0) {
            if (a % c == 0) {
                count += 1;
            }
        }
        b = b / 10;
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        int a;
        cin >> a;
        cout << result(a) << endl;
    }
    return 0;
}
