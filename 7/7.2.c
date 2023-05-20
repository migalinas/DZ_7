#include <stdio.h>
#include <stdlib.h>
#include "7.h"

char* readString() {
    size_t buffer_size = 0;
    char* buffer = NULL;
    ssize_t length = getline(&buffer, &buffer_size, stdin);
    if (length == -1) {
        printf("The wrong string reading!");
        free(buffer);
        return NULL;
    }
    if (buffer[length - 1] == '\n')
        buffer[length - 1] = '\0';
    return buffer;
}

