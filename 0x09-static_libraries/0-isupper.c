#include "main.h"
/**
 * _isupper  - check is the char upper.
 * @c: char to check
 * Return: 1 is upper , 0 otherwise
 *
 */
int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);

else
return (0);
}
