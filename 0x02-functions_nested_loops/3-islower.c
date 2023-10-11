#include <stdio.h>
#include <ctype.h>
int _islower(int c)
{
	char charc = (char)c;
	int result = islower(charc);

	return result;
}
