#include <bits/stdc++.h>
using namespace std;

int main() {
	int t, n, mx, mn, x;
	cin >> t;

	for (int i = 0; i < t; i++) {
		cin >> n;
		mn = INT_MAX, mx = INT_MIN;

		for (int j = 0; j < n; j++) {
			cin >> x;
			mn = min(mn, x);
			mx = max(mx, x);
		}
		cout << mx - mn << endl;
	}

}
