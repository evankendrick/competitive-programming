#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    long long penyebut;
    long long pembilang;
    cin >> A >> B >> C >> D;
         
    penyebut = B * D;
    pembilang = (A * D) + (C * B);
    
    long long ans = __gcd(pembilang, penyebut);
    
    long long pembilang_sederhana = pembilang / ans;
    long long penyebut_sederhana = penyebut / ans;
    
    cout << pembilang_sederhana << " " << penyebut_sederhana << endl;
}
