#include <stdio.h>
#include <stdlib.h>

int main(void) {
    if (putsc("Hello, World!") == EOF) {
        return EXIT_SUCCESS;
    }
    return EXIT_SUCCESS;
}
