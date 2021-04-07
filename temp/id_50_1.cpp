/*************************************************************************
	> File Name: id_50.cpp//状态转移过程优化
	> Author: ls
	> Mail: 
	> Created Time: Tue 09 Feb 2021 09:59:14 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;
#define MAX_N 32
#define MAX_M 1000000
int dp[MAX_N + 5][MAX_M + 5];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) dp[1][i] = i;
    for (int i = 2; i <= n; i++) {
        int k = 2;
        dp[i][1] = 1;
        dp[i][2] = 2;
        for (int j = 3; j <= m; j++) {
            while (dp[i - 1][k - 1] < dp[i][j - k]) ++k;//if (k < j && dp[i - 1][k - 1] < dp[i][j - k]) ++k;
            dp[i][j] = max(dp[i - 1][k - 1], dp[i][j - k]) + 1;
        }
    }
    cout << dp[n][m] << endl;
    return 0;
}
