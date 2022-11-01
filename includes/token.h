#ifndef TOKEN_H
#define TOKEN_H

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

struct _token
{
    char *beggining;
    char *end;
    struct _token *next;
};
typedef struct _token token;

token *create_token();
void display_tokens(token *tokens);
void destroy_tokens(token *tokens);

#endif // TOKEN_H
