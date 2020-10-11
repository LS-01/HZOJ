/*************************************************************************
	> File Name: id_137.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 12:19:12 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    char c = 'A';
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            cout << c++;
        }
        cout << endl;
    }
    return 0;
}
