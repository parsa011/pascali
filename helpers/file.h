#ifndef _PASCALI_FILE_H
# define _PASCALI_FILE_H

#include <stdbool.h>
#include <stdio.h>

bool file_exists(char *file_path);
FILE *file_open(char *file_path, char *mode);
void file_close(FILE *file);

#endif
