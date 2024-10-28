#ifndef _LEXER_H
# define _LEXER_H

typedef struct lexer{
	char *file_name;
} lexer_t;

lexer_t *lexer_init(char *file_path);

void lexer_free(lexer_t *lexer);

#endif
