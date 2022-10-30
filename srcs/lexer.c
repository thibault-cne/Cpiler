/* ************************************************************************************************************ */
/*                                                                                                              */
/*                                                                                                              */
// lexer.c
/*                                                                                                              */
// by Thibault Cheneviere : thibault.cheneviere@telecomnancy.eu
/*                                                                                                              */
// Created : 2022/10/30 16/43/10
/*                                                                                                              */
/*                                                                                                              */
/* ************************************************************************************************************ */

#include "../includes/lexer.h"

const char *whitespaces = " \r\n";
const char *delimiters = " \r\n(),:";

void lex(Error *err, char *source, char **beg, char **end)
{
    (void)beg;
    (void)end;

    if (!source || !beg || !end)
    {
        ERROR_PREP(*err, ERROR_ARGUMENTS, "Can not lex empty content.")
        return;
    }

    *beg = source;
    *beg += strspn(*beg, whitespaces);
    *end = *beg;

    if (**beg == '\0')
    {
        return;
    }

    *end += strcspn(*beg, delimiters);

    if (*end == *beg)
    {
        *end += 1;
    }
}
