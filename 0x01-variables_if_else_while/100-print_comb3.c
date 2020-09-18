#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int a, b = '0';
for (b = '0'; b <= '9'; b++)
{
for (a = '0'; a <= '9'; a++)
{
if (b < a)
{
putchar(b);
putchar(a);
}
if (b == '8' && a == '9')
{
break;
}
if (b < a)
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
