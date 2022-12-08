/**
 *expo- performs exponential opr
 *@base: constant base number
 *@power: power of the expo
 *
 *Return: return unit always
 */
#include "main.h"

unsigned int expo(unsigned int base, int power)
{
	unsigned int unit = 1;

	while (power > 0)
	{
		unit *= base;
		power--;
	}
	return (unit);
}
/**
 *binary_to_uint- func that convert binary to decimal
 *@b: pointer to string of binary
 *
 *Return:return unit always
 */
unsigned int binary_to_uint(const char *b)
{
	int power = strlen(b) - 1, i = 0;
	unsigned int unit = 0;

	if (b == NULL)
		return (0);
	while (b[i] != '\0')
	{
		if ((b[i] != '1' && b[i] != '0'))
			return (0);
		i++;
	}
	i = 0;
	while (b[i] != '\0')
	{
		if (b[i] == '1')
		{
			unit += expo(2, power);
		}
		else
		{
			unit += 0;
		}
		i++;
		power--;
	}
	return (unit);
}
