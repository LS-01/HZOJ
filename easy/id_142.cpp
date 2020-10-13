/*************************************************************************
	> File Name: id_142.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 02:16:05 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int is_back(int n) {
    int temp = n;
    int back = 0;
    while (n) {
        back = back * 10 + n % 10;
        n /= 10;
    }
    return back == temp;
}

int is_prime(int n) {
    if (n % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int a, b;
    cin >> a >> b;
    while (b >= a) {
        if (is_back(b) && is_prime(b)) {
            break;
        } else {
            b--;
        }
    }
    for (int i = a; i <= b; i++) {
        if (is_back(i) && is_prime(i)) {
            cout << i;
            if (i < b) {
                cout << " ";
            }
        }
    }
    cout << endl;
    return 0;
}
