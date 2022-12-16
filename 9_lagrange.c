#include <stdio.h>
#include <conio.h>
void main()
{
    float x[100], y[100], interp, result = 0, term;
    int i, j, n;
    printf("Enter number of data: ");
    scanf("%d", &n);
    printf("Enter data:\n");
    for (i = 1; i <= n; i++)
    {
        printf("x[%d] = ", i);
        scanf("%f", &x[i]);
        printf("y[%d] = ", i);
        scanf("%f", &y[i]);
    }
    printf("Enter interpolation point: ");
    scanf("%f", &interp);
    /* Implementing Lagrange Interpolation */
    for (i = 1; i <= n; i++)
    {
        term = 1;
        for (j = 1; j <= n; j++)
        {
            if (i != j)
            {
                term = term * (interp - x[j]) / (x[i] - x[j]);
            }
        }
        result = result + term * y[i];
    }
    printf("Interpolated value at %.3f is %.3f.", interp, result);
}