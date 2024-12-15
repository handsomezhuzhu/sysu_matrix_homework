#include <stdio.h>
#include "revStr.h"

char *revStr(char *s)
{
	int len = 0;
	static char reverse[MAX_SIZE];
	char *r = reverse;

	/* Find length of string */
	while (*(s++))
		len++;

	s--;
	while (len > 0)
	{
		*(r++) = *(--s);
		len--;
	}
	*r = '\0';

	return reverse;
}