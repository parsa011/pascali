#include "basic.h"
#include "lexer.h"

lexer_t *lexer_init(char *file_name)
{
	lexer_t *lexer = pmalloc(sizeof(lexer_t));
	return lexer;
}
