#include <stdio.h>
int main(void)
{
int sizeofchar = sizeof(char);
int sizeofint = sizeof(int);
int sizeoflongint = sizeof(long);
int sizeoflonglongint = sizeof(long long);
int sizeoffloat = sizeof(float);
int sizeofdouble = sizeof(double);
printf("Size of a char: %d byte(s)\n", sizeofchar);
printf("Size of an int: %d byte(s)\n", sizeofint);
printf("Size of a long int: %d byte(s)\n", sizeoflongint);
printf("Size of a long long int: %d byte(s)\n", sizeoflonglongint);
printf("Size of a float: %d byte(s)\n", sizeoffloat);
printf("Size of a double: %d byte(s)\n", sizeofdouble);
}
