#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 97;
for (a = 97; a <= 122; a++)
{
if (a == 101 || a == 113)
{
a = a + 1 - 1;
}
else
{
putchar((char)a);
}
}

putchar('\n');
return (0);
}

