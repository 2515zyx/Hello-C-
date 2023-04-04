#include<stdio.h>
#include<math.h>
int main()
{
	int n, i = 1, k = 1;
	float s = 1, x;
	scanf("%d%f", % n, &x);
	while (n--)
	{
		k *= i;
		s += pow(x, i) / k;
		i++;

	}
	printf("%f", s);
	return 0;
}