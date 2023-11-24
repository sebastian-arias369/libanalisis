#include <stdio.h>
#include "linear_fit.h"

int main() {
    int n;
    printf("Ingrese el número de puntos de datos: ");
    scanf("%d", &n);

    double x[n], y[n];

    for (int i = 0; i < n; i++) {
        printf("Ingrese el valor de x[%d]: ", i);
        scanf("%lf", &x[i]);
        printf("Ingrese el valor de y[%d]: ", i);
        scanf("%lf", &y[i]);
    }

    double m, b;
    linearFit(x, y, n, &m, &b);

    return 0;
}