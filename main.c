#include <stdio.h>

void main(int argc, char * argv[])
{
    if (argc != 2) {
        fprintf(stderr, "usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    FILE *source = fopen(argv[1], "r");
    if (source == NULL) {
        fprintf(stderr, "File: %s not found\n", argv[0]);
        exit(1);
    }
    printf("i will finish my first compiler!");
} 