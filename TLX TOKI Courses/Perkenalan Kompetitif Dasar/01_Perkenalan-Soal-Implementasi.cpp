#include <bits/stdc++.h>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(M, vector<int>(N, 0));
    
    for (int i = 1; i <= N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> A[j][N - i];
        }
    }
    for (int k = 0; k < M; k++) {
    	for (int l = 0; l < N; l++) {
    		cout << A[k][l] << " ";
    	}
    	cout << endl;
    }
}
