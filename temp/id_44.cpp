/*************************************************************************
	> File Name: id_44.cpp
	> Author: ls
	> Mail: 
	> Created Time: Thu 07 Jan 2021 04:54:09 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

#define MAX_N 1000000
int arr[MAX_N + 5];
int dp[MAX_N + 5];

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", arr + i);
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        dp[i] = 1;
        for (int j = 0; j < i; j++) {
            if (arr[j] >= arr[i]) continue;
            dp[i] = max(dp[i], dp[j] + 1);
        }
        ans = max(ans, dp[i]);
    }
    cout << ans << endl;
    return 0;
}
