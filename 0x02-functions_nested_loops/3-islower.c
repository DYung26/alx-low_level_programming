#include <stdio.h>
#include <ctype.h>
#include <locale.h>
setlocale(LC_ALL, "");
int _islower(int c)
{
	return islower(c);
}
