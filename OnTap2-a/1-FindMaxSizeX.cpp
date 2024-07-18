#include<iostream>
#include<vector>
using namespace std;

vector<int> number;

void AddNumber() {
    for (int i = 0; i < 101; i++) {
        number.push_back(0);
    }
}

int FindMaxSizeX(int n, vector<int> number, vector<int> a) {
    for (int i = 0; i < n; i++) {
        number[a[i]] += 1;
    }
    int max = number[0] + number[1];
    for (int i = 1; i < n - 1; i++) {
        if (number[i] + number[i + 1] > max) {
            max = number[i] + number[i + 1];
        }
    }
    return max;
}

int main() {
    AddNumber();
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++) {
        int b;
        cin >> b;
        a.push_back(b);
    }
    cout << FindMaxSizeX(n, number, a);
    return 0;
}
