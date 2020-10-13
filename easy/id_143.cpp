/*************************************************************************
	> File Name: id_143.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 12 Oct 2020 02:25:06 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int is_prime(int n) {
    int num = n / 1000 * 10 + n % 1000 / 100;
    if (num % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= num; i += 2) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

int is_pow(int n) {
    int num = n % 100 / 10 * 10 + n % 10;
    for (int i = 0; i * i <= num; i++) {
        if (i * i == num) {
            return 1;
        }
    }
    return 0;
}

int main() {
    int a, b, count = 0;
    cin >> a >> b;
    while (b >= a) {
        if (b % 6 == 0 && is_prime(b) && is_pow(b)) {
            break;
        } else {
            b--;
        }
    }
    for (int i = a; i <= b; i++) {
        if (i % 6 == 0 && is_prime(i) && is_pow(i)) {
            cout << i;
            if (i < b) {
                cout << " ";
            }
            count++;
        }
    }
    cout << endl << count << endl;
    return 0;
}
