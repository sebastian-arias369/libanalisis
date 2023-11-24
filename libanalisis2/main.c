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
    
    printf(" i     x[i]     y[i]   x[i]*x[i]  x[i]*y[i]    SumX      SumY     SumXX    SumXY\n");
    printf("\nCoeficiente m (pendiente): %lf\n", m);
    printf("Coeficiente b (intersección en el eje Y): %lf\n", b);

    return 0;
}