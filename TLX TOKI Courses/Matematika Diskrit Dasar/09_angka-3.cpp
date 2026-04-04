#include <bits/stdc++.h>
using namespace std;

vector<int> ubah(int a, int b) {
    vector<int> ans;
    if (a == 0) {
        ans.push_back(0);
            return ans;
        } else {
        while (a > 0) {
       ans.push_back(a % b);
       a = a / b;
    }
        reverse(ans.begin(), ans.end());
        return ans;
   }
}

int main() {
    //masukan angka
    int n, x;
    cin >> n >> x;
    //konversi ke tujuan basis
    vector<int> hasil = ubah(n, x);
    //output
    for(int i = 0; i < hasil.size(); i++) {
        cout << hasil[i];
    }
}
