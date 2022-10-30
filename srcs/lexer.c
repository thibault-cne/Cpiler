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

Error lex(char *source, char **beg, char **end)
{
    Error err;
    (void)beg;
    (void)end;

    err = ok;
    if (!source)
    {
        ERROR_PREP(err, ERROR_ARGUMENTS, "Can not lex empty content.")
        return err;
    }

    return err;
}
