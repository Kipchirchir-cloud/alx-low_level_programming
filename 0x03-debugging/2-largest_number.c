#include"main.h"

/**
*largest_number-returnsthelargestof3numbers
*@a:firstinteger
*@b:secondinteger
*@c:thirdinteger
*Return:largestnumber
*/

intlargest_number(inta,intb,intc)
{
intlargest;

if(a>b&&b>c)
{
largest=a;
}
elseif(a>c&&c>b)
largest=a;
elseif(b>a&&a>c)
{
largest=b;
}
elseif(b>c&&c>a)
largest=b;
elseif(c>a&&a>b)
largest=c;
else
{
largest=c;
}

return(largest);
}

