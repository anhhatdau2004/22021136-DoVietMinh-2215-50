#include<iostream>
using namespace std;

void MinMaxNum() {
    int n;
    cin >> n;

    double start;
    cin >> start;

    double min = start;
    double max = start;

    for(int i = 1; i < n; i++) {
        double x;
        cin >> x;
        if (x < min) {
            min = x;
        }
        if (x > max) {
            max = x;
        }
    }

    cout << max << endl << min;

}

int main() {
    MinMaxNum();
    return 0;
}
