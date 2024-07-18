#include<iostream>
#include<vector>
using namespace std;

bool SoDoiGuong(int n) {
    vector<int> number;
    int temp = n;
    while (temp != 0) {
        number.push_back(temp % 10);
        temp = temp / 10;
    }
    int a = (int) number.size();
    for (int i = 0; i < a / 2; i++) {
        if (number[i] != number[a - i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
        int A, B;
        cin >> A >> B;
        int count = 0;
        for (int j = A; j <= B; j++) {
            if (SoDoiGuong(j)) {
                count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}
