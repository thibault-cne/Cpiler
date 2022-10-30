#ifndef CPILER_LEXER_H
#define CPILER_LEXER_H

#include <string.h>

#include "error.h"

void lex(Error *err, char *source, char **beg, char **end);

#endif // CPILER_LEXER_H
