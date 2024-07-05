#include<iostream>
#include<iomanip>
using namespace std;

void diemtrungbinh() {
    double sum = 0;
    for (int i = 0; i < 5; i++) {
        int n;
        cin >> n;
        sum += n;
    }
    cout << setprecision(2) << fixed << sum / 5;
}

int main() {
    diemtrungbinh();
    return 0;
}
