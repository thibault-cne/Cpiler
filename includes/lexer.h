#ifndef CPILER_LEXER_H
#define CPILER_LEXER_H

#include "error.h"

Error lex(char *source, char **beg, char **end);

#endif // CPILER_LEXER_H
