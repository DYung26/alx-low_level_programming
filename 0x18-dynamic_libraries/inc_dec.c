#include <stdio.h>

void main(void)
{
int a = 5;
int result;

result = a++; /* result = 5, a becomes 6 */
printf("%i\n", result);
result = ++a; /* result = 7, a becomes 7 */
printf("%i\n", result);
result = a--; /* result = 7, a becomes 6 */
printf("%i\n", result);
result = --a; /*result = 5, a becomes 5*/
printf("%i\n", result);
}
