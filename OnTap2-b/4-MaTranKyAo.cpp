#include<iostream>
using namespace std;

void printMatrix(int N) {
    int a[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            a[i][j] = 0;
        }
    }

    int i = 0;
    int j = N / 2;
    a[i][j] = 1;
    int num = 2;

    while (num != N * N + 1) {
        if (a[(i + N - 1) % N][(j + 1) % N] == 0) {
            i = (i + N - 1) % N;
            j = (j + 1) % N;
            a[i][j] = num;
        } else {
            i = (i + 1) % N;
            a[i][j] = num;
        }
        num++;
    }

    for (int k = 0; k < N; k++) {
        for (int l = 0; l < N; l++) {
            cout << a[k][l] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    printMatrix(N);
    return 0;
}
