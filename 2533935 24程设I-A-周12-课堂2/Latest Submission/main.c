#include <stdio.h>
#include "revStr.h"

int main()
{
	char str[MAX_SIZE];
	char *s = str;
	char *sr;

	/* Input string from user */
	// printf("Enter the string: ");
	gets(str);

	sr = revStr(s);

	printf("%s", sr);

	return 0;
}
