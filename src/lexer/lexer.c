#include "basic.h"
#include "lexer.h"
#include "helpers/string.h"

lexer_t *lexer_init(char *file_name)
{
	lexer_t *lexer = pmalloc(sizeof(lexer_t));
	lexer->file_name = string_clone(file_name);
	return lexer;
}

void lexer_free(lexer_t *lexer)
{
	pfree(lexer->file_name);
	pfree(lexer);
}
