/* ************************************************************************************************************ */
/*                                                                                                              */
/*                                                                                                              */
// token.c
/*                                                                                                              */
// by Thibault Cheneviere : thibault.cheneviere@telecomnancy.eu
/*                                                                                                              */
// Created : 2022/11/01 15/26/42
/*                                                                                                              */
/*                                                                                                              */
/* ************************************************************************************************************ */

#include "../includes/token.h"

token *create_token()
{
    token *new_token;

    new_token = malloc(sizeof(token));
    memset(new_token, 0, sizeof(token));
    return new_token;
}

void display_tokens(token *tokens)
{
    while (tokens)
    {
        printf("Token : %.*s\n", (int)(tokens->end - tokens->beggining), tokens->beggining);
        tokens = tokens->next;
    }
}

void destroy_tokens(token *tokens)
{
    token *next_token;

    while (tokens)
    {
        next_token = tokens->next;
        free(tokens);
        tokens = next_token;
    }
}
