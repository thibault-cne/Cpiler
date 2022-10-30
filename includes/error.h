#ifndef CPILER_ERROR_H
#define CPILER_ERROR_H

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

#endif // CPILER_ERROR_H
