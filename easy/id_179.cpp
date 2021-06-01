/*************************************************************************
	> File Name: id_179.cpp
	> Author: ls
	> Mail: 
	> Created Time: Mon 31 May 2021 10:40:43 AM CST
 ************************************************************************/

#include <cstdio>
#include <cmath>
#define EPSILON 1e-7

double bisection(int p, int q, double (*func)(int, int, double));
double f(int p, int q, double x);
int main() {
    int p;
    int q;
    scanf("%d %d", &p, &q);
    printf("%.4lf\n", bisection(p, q, f));
    return 0;
}

double bisection(int p, int q, double (*func)(int, int, double)) {
    double min = -20, max = 20, mid = 0;
    while (fabs(func(p, q, mid)) >= EPSILON) {
        double midf = func(p, q, mid);
        double minf = func(p, q, min);
        double maxf = func(p, q, max);
        if (midf == 0) break;
        if (minf == 0) {
            mid = min;
            break;
        }
        if (maxf == 0) {
            mid = max;
            break;
        }
        if (midf * minf > 0 && maxf * midf < 0) {
            min = mid;
        } else if (midf * minf < 0 && maxf * midf > 0) {
            max = mid;
        } else {
            return -21;
        }
        mid = (max + min) / 2;
    }
    return mid;
}

double f(int p, int q, double x) {
    return p * x + q;
}
