#include <stdlib.h>
#include <assert.h>
#include "basic.h"

void *pmalloc(int size)
{
	void *res = malloc(size);
	assert(res);
	return res;
}

void pfree(void *m)
{
	assert(m);
	free(m);
}
