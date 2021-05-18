/*************************************************************************
	> File Name: id_166.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 18 May 2021 04:09:25 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string A, B;
    int N, L;
    cin >> A >> N >> B;
    L = A.length();
    A.insert(N - 1, B);
    int xIndex = A.length() - A.find_last_of('x');
    cout << (L > 100 ? 100 : L) << endl;
    cout << A << endl << xIndex << endl;
    return 0;
}
