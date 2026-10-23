#include <bits/stdc++.h>
using namespace std;

int main() {
    //input
    int n, x; cin >> n >> x;
    pair<int, int> angka[n];
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
            angka[i].first = a;
            angka[i].second = abs(x - a);
    }
    // cek selisih
    int hasil = angka[0].first;
    int terkecil = angka[0].second;
    for (int  j = 0; j < n; j++) {
      if (angka[j].second < terkecil) {
          terkecil = angka[j].second;
          hasil = angka[j].first;
      } else if (angka[j].second == terkecil) {
          hasil = min(angka[j].first, hasil);
      }
    }
    //output
    cout << hasil;
}
