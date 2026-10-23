#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll const mod = 1e6;
bool check = false;

ll multiply(ll a, ll b) {
    if (a * b >= mod) {
        check = true;
    }
    return (a * b) % mod;
}
        

ll solve(ll a, ll b) {
    if (b == 0) return 1;
    if (b == 1) {
        return a % mod;
    }
    ll res = solve(a, b / 2);
    ll ans = multiply(res, res);
    
    if (b % 2 != 0) {
        return multiply(ans, a) % mod;
    }
    return ans;
}

int main() {
    ll a, b; cin >> a >> b;
    ll ans = solve(a, b);
    if(check == true || a >= mod) {
        cout << setfill('0') << setw(6) << ans << endl;
    } else {
        cout << ans << endl;
    }
    
}

// 3^8 = 3^4 * 3^4
// 3^4 = 3^2 * 3^2 
// 3^2 = 3 * 3
// 3 = 3
