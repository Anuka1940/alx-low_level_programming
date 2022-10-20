/**
*_isalpha -this check for alphabets only
*@parameters:it accept one character intc
*
*Description: check if variable is either lowercase or upercase
*
*Return: return (1) for lowercase or upercase esle return (0)
*/
int_isalpha(intc)
/*intc takes only one variable*/
{
int i = c;

if ((i >= 65, &&i <= 90) || (i >= 97, &&i <= 122))
return (1);
else
return (0)}