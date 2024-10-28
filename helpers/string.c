#include <string.h>
#include "src/basic.h"
#include "string.h"

char *string_clone(char *str)
{
	int len = strlen(str);
	char *res = pmalloc(len + 1);
	strcpy(res, str);
	*(res + len) = '\0';
	return res;
}
