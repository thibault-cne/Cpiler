/* ************************************************************************************************************ */
/*                                                                                                              */
/*                                                                                                              */
// file.c
/*                                                                                                              */
// by Thibault Cheneviere : thibault.cheneviere@telecomnancy.eu
/*                                                                                                              */
// Created : 2022/10/30 15/46/43
/*                                                                                                              */
/*                                                                                                              */
/* ************************************************************************************************************ */

#include "../includes/file.h"

size_t file_size(FILE *file)
{
    size_t size = 0;

    fseek(file, 0, SEEK_END);
    size = ftell(file);
    fseek(file, 0, SEEK_SET);

    return size;
}

char *read_file(const char *path)
{
    size_t size;
    char *buffer;
    int err;
    FILE *file;

    file = fopen(path, "r");
    if (file == NULL)
    {
        printf("Error: cannot open file %s\n", path);
        exit(1);
    }

    size = file_size(file);
    buffer = malloc(sizeof(char) * (size + 1));

    fread(buffer, sizeof(char), size, file);
    buffer[size] = '\0';

    err = ferror(file);
    fclose(file);

    if (err)
    {
        free(buffer);
        return NULL;
    }

    return buffer;
}
