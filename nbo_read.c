// nbo_read.c
#include "nbo_read.h"

uint32_t nbo_read(FILE *file) {
    uint32_t result;
    fread(&result, 1, 4, file);
    result = ntohl(result);
    return result;
}