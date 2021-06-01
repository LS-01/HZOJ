/*************************************************************************
	> File Name: id_185.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 01 Jun 2021 09:22:03 AM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n + 5];
    array[1] = 1;
    array[2] = 1;
    for (int i = 3; i <= n; i++) {
        array[i] = array[i - 1] + array[i - 2];
    }
    cout << array[n] << endl;
    return 0;
}
