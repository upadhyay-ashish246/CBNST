#include <stdio.h>
//can be any of the functions
float func(float x, float y)
{
    float f;
    f = x + y;
    return f;
}
void main()
{
    float x0,x, y0, h, t, k;
    printf("\nEnter x0,y0,h,xn: ");
    scanf("%f%f%f%f", &x0, &y0, &h, &x);
    printf("\n x\t y\n");
    //y=y+h*func(x,y);
    while (x0 <= x)
    {
        k = h * func(x0, y0);
        y0 = y0 + k;
        x0 = x0 + h;
        printf("%0.3f\t%0.3f\n", x0, y0);
    }
}