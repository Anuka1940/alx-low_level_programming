/**
*swap_int-swap two integer
*@a:pointer to integer a
*@b: pointer to integer b
*
*return: nothingS
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
