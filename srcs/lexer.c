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

void lex(Error *err, char *source, token *ct)
{
    if (!source || !ct)
    {
        ERROR_PREP(*err, ERROR_ARGUMENTS, "Can not lex empty content.")
        return;
    }

    ct->beggining = source;
    ct->beggining += strspn(ct->beggining, whitespaces);
    ct->end = ct->beggining;

    if (*ct->beggining == '\0')
    {
        return;
    }

    ct->end += strcspn(ct->beggining, delimiters);

    if (ct->end == ct->beggining)
    {
        ct->end++;
    }
}
