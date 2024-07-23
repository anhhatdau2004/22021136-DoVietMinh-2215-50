#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

vector<vector<int> > findTriplets(int n, int a[]) {
    vector<vector<int> > triplets;
    for (int i = 0; i < n - 2; ++i) {
        if (i > 0 && a[i] == a[i - 1])
            continue;

        int left = i + 1;
        int right = n - 1;

        while (left < right) {
            int sum = a[i] + a[left] + a[right];

            if (sum == 0) {
                triplets.push_back({a[i], a[left], a[right]});
                left++;
                right--;

                while (left < right && a[left] == a[left - 1])
                    left++;
                while (left < right && a[right] == a[right + 1])
                    right--;
            } else if (sum < 0) {
                left++;
            } else {
                right--;
            }
        }
    }

    return triplets;
}


int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    sort(a, a + n);
    vector<vector<int>> triplets = findTriplets(n, a);
    for(int i = 0; i < (int) triplets.size(); i++) {
        vector<int> result = triplets[i];
        cout << result[0] << " " << result[1] << " " << result[2] << endl;
    }
}
