/* ************************************************************************************************************ */
/*                                                                                                              */
/*                                                                                                              */
// parser.c
/*                                                                                                              */
// by Thibault Cheneviere : thibault.cheneviere@telecomnancy.eu
/*                                                                                                              */
// Created : 2022/10/30 17/04/53
/*                                                                                                              */
/*                                                                                                              */
/* ************************************************************************************************************ */

#include "../includes/parser.h"

void parse_expr(Error *err, char *source)
{
    token *tokens;
    token *token_it;
    token *current_token;

    tokens = NULL;
    token_it = tokens;
    current_token = create_token();

    current_token->beggining = source;
    current_token->end = source;

    while (err->type == ERROR_NONE)
    {
        lex(err, current_token->end, current_token);

        if (current_token->beggining == current_token->end)
        {
            break;
        }

        if (tokens)
        {
            token_it->next = create_token();
            memcpy(token_it->next, current_token, sizeof(token));
            token_it = token_it->next;
        }
        else
        {
            tokens = create_token();
            memcpy(tokens, current_token, sizeof(token));
            token_it = tokens;
        }
    }

    display_tokens(tokens);

    destroy_tokens(tokens);
    destroy_tokens(current_token);
}
