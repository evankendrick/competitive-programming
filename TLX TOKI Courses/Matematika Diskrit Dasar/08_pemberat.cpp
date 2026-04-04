#include <bits/stdc++.h>
using namespace std;

vector<long long> biner(long long a) {
    vector<long long> ans;
    long long power = 1;
    while (a > 0) {
        if (a % 2 == 1) {
             ans.push_back(power);
        }
        a = a/ 2;
        power *= 2;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    long long b, S;
    long long k;
    cin >> b >> k;
    S = k - b;
   vector<long long> final = biner(S);
    for (int i = 0; i < final.size(); i++) {
        cout << final[i] << endl;
    }
}
