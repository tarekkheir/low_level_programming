#include <stdio.h>
/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
int a = 97;
int b = '0';
for (b = '0'; b <= '9'; b++)
{
putchar(b);
}
for (a = 97; a <= 102; a++)
{
putchar((char)a);
}
putchar('\n');
return (0);
}
