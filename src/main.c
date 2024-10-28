#include <stdio.h>
#include <stdlib.h>
#include "basic.h"
#include "helpers/file.h"

void help()
{
	printf("pascali 'file-name'");
}

void panic()
{
	exit(EXIT_FAILURE);
}

int main(int argc, char *args[])
{
	if (argc == 1) {
		printf("ERROR : Enter File Path");
		panic();
	}
	char *file_path = args[1];
	if (!file_exists(file_path)) {
		printf("ERROR : File Not Found\n");
		panic();
	}
	FILE *file = file_open(file_path, "r");
	int c = fgetc(file);
	while (c != EOF) {
		putchar(c);
		c = fgetc(file);
	}
	file_close(file);
	return 0;
}
