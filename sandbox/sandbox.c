#include <stddef.h>
#include <stdio.h>

int main(void) {
    // int zero = 0;
    // size_t int_size = sizeof zero;
    printf("Size of int: %ld bytes\n", sizeof(int));
    printf("Size of long int: %ld\n", sizeof(long));
    printf("Size of size_t: %ld bytes\n", sizeof(size_t));
}
