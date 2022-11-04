#include <stdio.h>
#include <stdlib.h>
float square_root(float n);
float check_square(float x, float n);

float check_square(float x, float n)
{
	float i = 0;
	if ((x * x) > n )
	{
		i = (x + (x - 0.001)) / 2;
		return (i);
	}
		if ((x * x) == n)
	{
		return (x);
	}
		else
	{
		return (check_square((x + 0.001), n));	
	}
}
float square_root(float n)
{
	float ans;
	
	ans = check_square(1, n);
	return (ans);
}
int main(void)
{
	float r;
	r = check_square(1, 16); 
	printf("%f\n", r);
	return (0);
}
