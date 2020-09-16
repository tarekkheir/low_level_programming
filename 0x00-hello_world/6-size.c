#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char charactere;
int entier;
long int entier_long;
long long int entier_long_long;
float flottant;
printf("Size of a char: %ld byte(s)\n", sizeof(charactere));
printf("Size of an int: %ld byte(s)\n", sizeof(entier));
printf("Size of a long int: %ld byte(s)\n", sizeof(entier_long));
printf("Size of a long long int: %ld byte(s)\n", sizeof(entier_long_long));
printf("Size of a float: %ld byte(s)\n", sizeof(flottant));
return (0);
}
