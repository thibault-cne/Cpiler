#ifndef CPILER_LEXER_H
#define CPILER_LEXER_H

#include <string.h>

#include "error.h"
#include "token.h"

void lex(Error *err, char *source, token *current_token);

#endif // CPILER_LEXER_H
