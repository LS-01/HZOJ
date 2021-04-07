/*************************************************************************
	> File Name: id_47.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 02 Feb 2021 09:28:22 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 100
#define MAX_V 10000
int v[MAX_N + 5], w[MAX_N + 5];
int dp[2][MAX_V + 5];

int main() {
    int V, n;
    cin >> V >> n;
    for (int i = 1; i <= n; i++) cin >> v[i] >> w[i];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= V; j++) {
            dp[i % 2][j] = dp[(i - 1) % 2][j];
            if (j >= v[i]) dp[i % 2][j] = max(dp[i % 2][j], dp[(i - 1) % 2][j - v[i]] + w[i]);
        }
    }
    cout << dp[n % 2][V] << endl;
    return 0;
}
