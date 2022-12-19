#include "main.h"
#include <stdio.h>
/**
 *  *print_array - prints n elements of an array of integers
 *   *@a: A pointer to an int that will be updated/ changed
 *    *@n: return value n
 *     *Return: void which ,means our answer is correct
*/
void print_array(int *a, int n)
{
int i;
i = 0;
for (n--; n >= 0; n--, i++)
{
printf("%d", a[i]);
if (n > 0)
{
printf(", ");
}}
printf("\n");
}
