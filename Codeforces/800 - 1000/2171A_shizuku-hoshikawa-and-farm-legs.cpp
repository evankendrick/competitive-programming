#include <iostream>
using namespace std;
 
int main() {
    int t, ans;
    cin >> t;
    int n[t - 1];
    
    for (int i = 0; i < t; i++) {
        cin >> n[i];
    }
    for (int j = 0; j < t; j++) {
        if (n[j] % 2 == 0) {
            ans = n[j]/4 + 1;
            cout << ans << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
