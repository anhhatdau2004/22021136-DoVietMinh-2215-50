#include<iostream>
#include<vector>
using namespace std;

int minNum(vector <int> number) {
    int min = number[0];
    for (int i = 1; i < number.size(); i++) {
        if (number[i] < min) {
            min = number[i];
        }
    }
    return min;
}

void SoX() {
    int n;
    cin >> n;
    vector <int> anum;
    vector <int> bnum;
    for(int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        anum.push_back(a);
        bnum.push_back(b);
    }
    cout << minNum(anum) * minNum(bnum);
}

int main() {
    SoX();
    return 0;
}
