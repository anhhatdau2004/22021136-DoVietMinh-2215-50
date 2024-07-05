#include<iostream>
#include<cmath>
#include<algorithm>
using namespace std;

void findMinDistance() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int min = 999999999;
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++) {
        int kc = abs(arr[i + 1] - arr[i]);
        if (kc < min) {
            min = kc;
        }
    }
    cout << min;
}

int main() {
    findMinDistance();
    return 0;
}
