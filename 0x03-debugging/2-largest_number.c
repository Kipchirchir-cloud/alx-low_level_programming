#include"main.h"

/**
*largest_number-returnsthelargestof3numbers
*@a:firstinteger
*@b:secondinteger
*@c:thirdinteger
*Return:largestnumber
*/

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && b > c)
	{
		largest = a;
	}
	else if (a > c && c > b)
		largest = a;
	else if (b > a && a > c)
	{	
		largest = b;
	}
	else if (b > c && c > a)
		largest = b;
	else if (c > a && a > b)
		largest = c;
	else
	{
		largest = c;
	}

	return (largest);
}

