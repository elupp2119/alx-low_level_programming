#include "main.h"
/**
 *  * *_strcpy -  copies the string pointed to by src
 *   * @dest: char type string
 *    * @src: char t#include "main.h"
 */
 * _atoi - Convert a string to an integer.
 *  * @s: The pointer to convert
 *   *
 *    * Return: A integer
 *     */
 int _atoi(char *s)
{
int c = 0;
unsigned int ni = 0;
int min = 1;
int isi = 0;
while (s[c])
{
if (s[c] == 45)
{
min *= -1;
}
while (s[c] >= 48 && s[c] <= 57)
{isi = 1;
ni = (ni * 10) + (s[c] - '0');
c++;
}
if (isi == 1)
{
break;
}
c++;
}
ni *= min;
return (ni);
}ype string
 * Description: Copy the string pointed to by pointer `src` to
 *  * the buffer pointed to by `dest`
 *   * Return: Pointer to `dest
   */
char *_strcpy(char *dest, char *src)
{
int i = -1;
do {
i++;
dest[i] = src[i];
} while (src[i] != '\0');
return (dest);
}

