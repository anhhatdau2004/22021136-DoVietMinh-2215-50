#include<iostream>
#include<cmath>
using namespace std;

bool prime[10000001];

void sangEratos() {
    for (int i = 0; i <= 10000000; i++) {
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for (int i = 2; i <= sqrt(10000000); i++) {
        if (prime[i]) {
            for (int j = i * i; j <= 10000000; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    sangEratos();
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        if (prime[a[i]]) {
            cout << a[i] << " ";
        }
    }
    return 0;
}
