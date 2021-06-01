/*************************************************************************
	> File Name: id_175.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 31 May 2021 09:39:54 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int N, n;
    cin >> N;
    int F[4] = {0};
    for (int i = 0; i < N; i++) {
        cin >> n;
        if (n >= 90 && n <= 100) {
            F[0]++;
        } else if (n >= 80 && n <= 89) {
            F[1]++;
        } else if (n >= 60 && n <= 79) {
            F[2]++;
        } else if (n < 60) {
            F[3]++;
        }
    }
    cout << "You " << F[0] << endl;
    cout << "Liang " << F[1] << endl;
    cout << "Zhong " << F[2] << endl;
    cout << "Cha " << F[3] << endl;
    return 0;
}
