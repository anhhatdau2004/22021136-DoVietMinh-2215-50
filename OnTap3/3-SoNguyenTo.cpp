#include<iostream>
#include<cmath>
using namespace std;

bool is_prime(int n) {
    if (n < 2) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void print_prime(int n) {
    for (int i = 2; i < n; i++) {
        if (is_prime(i)) {
            cout << i << endl;
        }
    }
}

int main() {
    int N;
    cin >> N;
    print_prime(N);
    return 0;
}
