#include <bits/stdc++.h>
using namespace std;

vector<long long> faktor (long long e) {
    vector<long long> ans;
    for (long long i = 1; i * i <= e; i++) {
        if (i * i == e) {
            ans.push_back(i);
            continue;
        }
        if (e % i == 0) {
            ans.push_back(i);
            ans.push_back(e / i);
        }
    }
    return ans;
}
    
int main() {
    // masukan angka
    long long b, c, d, x;
    vector<long long> hasil;
    cin >> b >> c >> d;
    // hitung kemungkinan
if (c < d) {
    cout <<  "0";
    return 0;
}
    
    if (c == d) {
        if (b <= c) {
            cout << "0";
        } else {
        long long jawaban = b - c;
        cout << jawaban;
        }
    } else {
    long long count = 0;
    x = c - d;
    hasil = faktor(x);
    //filter jawaban
    for (int j = 0; j < hasil.size(); j++) {
        if (hasil[j] > d  && hasil[j] <= b) {
            count++;
            }
        }
        cout << count;
    }
}
