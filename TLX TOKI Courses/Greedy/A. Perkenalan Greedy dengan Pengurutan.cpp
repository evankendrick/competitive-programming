#include <bits/stdc++.h>
using namespace std;

bool comparator(int a, int b) {
    return a > b;
}

int main() {
    int n, b; cin >> n >> b;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end(), comparator);
    int total = 0, cnt = 0;
    for (int i = 0; i < n; i++) {
        if (total >= b) {
            break;
        } else {
            total += arr[i];
            cnt++;
        }
    }
    cout << cnt;
}
