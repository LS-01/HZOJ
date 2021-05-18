/*************************************************************************
	> File Name: id_167.cpp
	> Author: ls
	> Mail: 
	> Created Time: Tue 18 May 2021 04:35:56 PM CST
 ************************************************************************/

#include <iostream>
using namespace std;

int main() {
    string A, B;
    int N, L;
    cin >> A >> N >> B;
    L = A.length();
    int aIndex = A.find('a') + 1;
    A.insert(N - 1, B);
    cout << L << endl << aIndex << endl << A << endl;
    return 0;
}
