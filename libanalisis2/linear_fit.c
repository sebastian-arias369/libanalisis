#include "linear_fit.h"
#include <stdio.h>

void linearFit(double x[], double y[], int n, double* m, double* b) {
    double sumX = 0.0;
    double sumY = 0.0;
    double sumXX = 0.0;
    double sumXY = 0.0;
    
    for (int i = 0; i < n; i++) {
        sumX += x[i];
        sumY += y[i];
        sumXX += x[i] * x[i];
        sumXY += x[i] * y[i];

        // Imprimir datos de la tabla
        printf("%2d   %8lf  %8lf  %8lf  %8lf  %8lf  %8lf  %8lf  %8lf\n",
               i, x[i], y[i], x[i] * x[i], x[i] * y[i], sumX, sumY, sumXX, sumXY);
    }


}

