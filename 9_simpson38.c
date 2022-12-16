#include <stdio.h>
float func(float x)
{
	return 1 / (1 + x * x);
}
float trapezoidal(float a, float b, float n)
{
	float h = (b - a) / n;
	float res = 0;
	for (int i = 0; i <= n; i++)
	{
		if (i == 0 || i == n)
			res += func(a + i * h);
		else if (i % 3 == 0)
			res += 2 * func(a + i * h);
		else
			res += 3 * func(a + i * h);
	}
	return (3 * h / 8) * res;
}
int main()
{
	float x0 = 1;
	float xn = 10;

	int n = 10;
	printf("Value of integral is %f\n", trapezoidal(x0, xn, n));
	return 0;
}