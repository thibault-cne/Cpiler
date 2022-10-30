#ifndef CPILER_FILE_H
#define CPILER_FILE_H

#include <stdlib.h>
#include <stdio.h>

size_t file_size(FILE *file);
char *read_file(const char *path);

#endif // CPILER_FILE_H
