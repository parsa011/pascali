#include <stdio.h>
#include <stdlib.h>
#include "file.h"

void help()
{
	printf("compiler_name file-name");
}

void panic()
{
	exit(EXIT_FAILURE);
}

int main(int argc, char *args[])
{
	printf("Pascal Compiler with c and emacs :) \n");
	if (argc == 1) {
		printf("enter file name");
		panic();
	}
	if (!file_exists(args[1])) {
		printf("file not found\n");
		panic();
	}
	return 0;
}
