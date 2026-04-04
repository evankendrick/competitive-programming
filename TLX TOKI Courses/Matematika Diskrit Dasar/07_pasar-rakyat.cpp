#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, kpk;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    kpk = arr[0];
    for(int j = 1; j < n; j++) {
        kpk = (kpk / __gcd(kpk, arr[j])) * arr[j];
    }
    cout << kpk;
}
