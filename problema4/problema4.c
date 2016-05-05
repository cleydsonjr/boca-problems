#include <stdio.h>
#include <math.h>

int main() {
    int m;
    int n;
    double l1;
    double l2;
    double h;
    scanf("%d", &m);
    scanf("%d", &n);
    l1 = pow(m, 2) - pow(n, 2);
    l2 = 2 * m * n;
    double l1p = pow(l1, 2);
    double l2p = pow(l2, 2);
    h = l1p + l2p;
    h = sqrt(h);
    printf("L1 = %0.2f\n", l1);
    printf("L2 = %0.2f\n", l2);
    printf("HIPOTENUSA = %0.2f\n", h);
    return 0;
}