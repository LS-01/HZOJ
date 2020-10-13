/*************************************************************************
	> File Name: id_138.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 08:59:26 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (n - i) * 2; j++) {
            cout << "A";
        }
        cout << endl;
    }
    return 0;
}
