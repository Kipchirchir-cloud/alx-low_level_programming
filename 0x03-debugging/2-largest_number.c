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
	else if (b > a && a > c)
	{
	largest = b;
	}
	else
	{
	largest = c;
	}

	return (largest);
}

