#include <stdio.h>

int main(void) {
    float pi = 3.1459f;
    float phi = 1.61803f;
    float *af[2]; // array of float pointers
    af[0] = &pi;
    af[1] = &phi;

    //
    printf("PI = %f\n", *af[0]);
    printf("PHI = %f\n", *af[1]);
}