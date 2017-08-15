#include "globals.h"

#include "util.h"

#include "scan.h"

int lineno = 0;
FILE * source;
FILE * listing;
FILE * code;

int EchoSource = TRUE;

void main(int argc, char * argv[])
{
    char pgm[120];
    if (argc != 2) {
        fprintf(stderr, "usage: %s <filename>\n", argv[0]);
        exit(1);
    }

    source = fopen(argv[1], "r");
    if (source == NULL) {
        fprintf(stderr, "File: %s not found\n", argv[0]);
        exit(1);
    }
    listing = stdout;
    while (getToken() != 0);
} 