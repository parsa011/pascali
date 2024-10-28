#include <stdio.h>
#include <stdlib.h>
#include "basic.h"
#include "helpers/file.h"
#include "lexer/lexer.h"

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
	lexer_t *lexer = lexer_init(file_path);
	if (lexer) {
		printf("lexer malloced\n");
	}
	lexer_free(lexer);
	return 0;
}
