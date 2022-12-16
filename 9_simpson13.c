#include <stdio.h>
float y(float x)
{
    return 1 / (1 + x * x);
}
float simp(float a, float b, float n)
{
    float h = (b - a) / n;
    float s = y(a) + y(a + n * h);

    for (int i = 1; i < n; i++)
        if (i % 2 == 0)
            s += 2 * y(a + i * h);
        else
            s += 4 * y(a + i * h);
    return (h / 3) * s;
}
int main()
{
    float x0 = 4;
    float xn = 5.2;
    int n = 6;
    printf("Value of integral is %f\n", simp(x0, xn, n));
	return 0;
}