#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x, y, nCr;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x >> y;
    }
    if (n < 3) {
        cout << "0";
    } else {
    nCr = n * (n -1) * (n - 2) / 6;
    cout << nCr;
    }
 }
