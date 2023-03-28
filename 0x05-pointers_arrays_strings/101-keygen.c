#include <stdio.h>
#include <string.h>

#define PASSWORD "MySuperSecurePassword"

int main(int argc, char **argv)
{
    if (argc != 2) {
        printf("Usage: %s password\n", argv[0]);
        return 1;
    }

    if (strcmp(argv[1], PASSWORD) == 0) {
        printf("Tada! congrats\n");
    } else {
        printf("Invalid password\n");
    }

    return 0;
}
