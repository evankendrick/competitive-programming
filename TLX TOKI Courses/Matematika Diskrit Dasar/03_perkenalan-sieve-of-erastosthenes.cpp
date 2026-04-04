#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;
    
    for (int i = 2; i * i <= n; i++) {
        while (n % i == 0) {
            n /= i;
            cnt++;
        }
        if (cnt > 1 && n == 1) {
        cout << i << "^" << cnt;
        } else if (cnt > 1) {
        cout << i << "^" << cnt << " x ";
        } else if (cnt == 1) {
        	cout << i << " x ";
        } 
        cnt = 0;
    }
   if (n > 1) {
   	cout << n;
   }
}
