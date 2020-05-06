#include <inttypes.h>
#include <stdlib.h>

int add(int a, int b)
{
return (a + b);
}

int sub(int a, int b)
{
return (a - b);
}


int mul(int a, int b)
{
return (a * b);
}
div_t div(int a, int b)
{
div_t q = div(a, b);
return ((div_t)q);
}

int mod(int a, int b)
{
return (a % b);
}

