#include <bits/stdc++.h>
using namespace std;

void Solve(int a) {
    int pat = sqrt(a);
    int cnt = 1;
        for (int i = 2; i <= pat; i++) {
            if (a % i == 0) {
                cnt++;
            }
        }
        if (cnt > 2) {
            cout << "BUKAN" << endl;
        } else cout << "YA" << endl;
}

int main() {
    int t, n;
    cin >> t;
    
    while (t--) {
        cin >> n;
        Solve(n);
    }   
}
