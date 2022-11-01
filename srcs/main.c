/* ************************************************************************************************************ */
/*                                                                                                              */
/*                                                                                                              */
// main.c
/*                                                                                                              */
// by Thibault Cheneviere : thibault.cheneviere@telecomnancy.eu
/*                                                                                                              */
// Created : 2022/10/30 15/45/11
/*                                                                                                              */
/*                                                                                                              */
/* ************************************************************************************************************ */

#include "../includes/main.h"

int main(int argc, char **argv)
{
    if (argc < 2)
    {
        printf("Usage: %s <file>\n", argv[0]);
        return 1;
    }

    char *content;
    Error err;

    err = ok;
    content = read_file(argv[1]);

    if (content)
    {
        printf(":---:\n%s\n:---:\n", content);
        parse_expr(&err, content);
        print_error(err);

        free(content);
    }

    return 0;
}
