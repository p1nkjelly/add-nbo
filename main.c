// main.c
#include <stdio.h>
#include "nbo_read.h"
#include "nbo_sum.h"

int main(int argc, char* argv[]) {
    FILE *file1, *file2;
    uint32_t f1, f2, result;

    if (argc != 3) {
        printf("Error. Give me two file inputs.\n");
        return 1;
    }
    if (!(file1 = fopen(argv[1], "r"))) {
        printf("File1 read error.\n");
        return 2;
    }
    if (!(file2 = fopen(argv[2], "r"))) {
        printf("File2 read error.\n");
        return 2;
    }

    f1 = nbo_read(file1);
    f2 = nbo_read(file2);
    result = nbo_sum(f1, f2);

    printf("%u(0x%x) + %u(0x%x) = %u(0x%x)\n", f1, f1, f2, f2, result, result);

    fclose(file1);
    fclose(file2);

    return 0;
}
