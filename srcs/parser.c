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
    char *beg;
    char *end;

    beg = source;
    end = source;

    while (err->type == ERROR_NONE)
    {
        lex(err, end, &beg, &end);
        printf("Lexed : %.*s\n", (int)(end - beg), beg);

        if (beg == end)
        {
            break;
        }
    }
}
