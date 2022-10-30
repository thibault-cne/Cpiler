#ifndef CPILER_ERROR_H
#define CPILER_ERROR_H

#include <stdlib.h>
#include <stdio.h>
typedef struct Error
{
    enum ErrorType
    {
        ERROR_NONE = 0,
        ERROR_ARGUMENTS,
        ERROR_TYPE,
        ERROR_GENERIC,
        ERROR_SYNTAX,
        ERROR_TODO,
        ERROR_MAX,
    } type;
    char *msg;
} Error;

void print_error(Error err);

extern Error ok;

#define ERROR_PREP(n, t, message) \
    (n).type = (t);               \
    (n).msg = (message);

#endif // CPILER_ERROR_H
