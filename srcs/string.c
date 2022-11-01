/* ************************************************************************************************************ */
/*                                                                                                              */
/*                                                                                                              */
// string.c
/*                                                                                                              */
// by Thibault Cheneviere : thibault.cheneviere@telecomnancy.eu
/*                                                                                                              */
// Created : 2022/11/01 16/02/45
/*                                                                                                              */
/*                                                                                                              */
/* ************************************************************************************************************ */

#include "../includes/string.h"

int strings_equalp(char *str, char *beg, const char *end)
{
    if (!str || !beg || !end)
    {
        return 0;
    }

    while (str && beg < end)
    {
        if (*str != *beg)
        {
            return 0;
        }
        str++;
        beg++;
    }

    return 1;
}