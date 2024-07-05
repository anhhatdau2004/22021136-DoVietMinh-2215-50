#include <iostream>
using namespace std;

void sort(int &a, int & b) {
    if (a > b) {
        int c = a;
        a = b;
        b = c;
    }
}

void TamGiac() {
    int canh1, canh2, canh3;
    cin >> canh1 >> canh2 >> canh3;

    sort(canh1, canh2);
    sort(canh1, canh3);
    sort(canh2, canh3);


    bool check1 = canh1 + canh2 > canh3;
    bool check2 = canh1 > 0;
    if (check1 && check2) {
        int chuvi = canh1 + canh2 + canh3;
        cout << chuvi << endl;
        if (canh1 == canh2 || canh2 == canh3) {
            if (canh1 == canh3) {
                cout << "deu";
            } else {
                cout << "can";
            }
        } else if (canh1 * canh1 + canh2 * canh2 == canh3 * canh3) {
            cout << "vuong";
        } else {
            cout << "thuong";
        }
    } else {
        cout << "Invalid";
    }
}

int main() {
    TamGiac();
    return 0;
}
