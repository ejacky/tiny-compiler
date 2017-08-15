#include <stdio.h>

void main(int argc, char * argv[])
{
    if (argc != 2) {
        fprintf(stderr, "usage: %s <filename>\n", argv[0]);
    }
    printf("i will finish my first compiler!");
} 