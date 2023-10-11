#include <stdio.h>
#include <ctype.h>
#include <locale.h>
int _islower(int c)
{
	chrc = (char)(c);
	setlocale(LC_ALL, "");
	return islower(chrc);
}
