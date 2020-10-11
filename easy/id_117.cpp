/*************************************************************************
	> File Name: id_117.cpp
	> Author: ls
	> Mail: 
	> Created Time: Fri 09 Oct 2020 11:52:39 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int is_back(int n){
    int m = 0;
    while (n) {
        m = m * 10 + n % 10;
        n /= 10;
    }
    return m;
}

int main() {
    int a;
    cin >> a;
    if (a == is_back(a)) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    cout << endl;
    return 0;
}
