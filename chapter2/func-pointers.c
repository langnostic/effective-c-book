#include <stdio.h>

void print_a(void) {
    puts("Hello Func Pointer, from print_a func!\n");
}

void print_b(void){
    puts("What's gud func_p, from func print_b!\n");
}

int main(void) {
    void (*func_p[2])() = {print_a, print_b};
    for (int i = 0; i < 2; i++) {
        (*func_p[i])();
    }
    return 0;
}