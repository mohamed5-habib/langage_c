#include <stdio.h>
#include <stdlib.h>

float min(float x, float y) {
    if (x<y) {
        return x;
    } else {
        return y;
    }
}

float max(float x, float y) {
    if (x>y) {
        return x;
    } else {
        return y;
    }
}

void main() {
    float r1, r2, r3, r4;

    printf("Donner les quatres reel:\n");
    scanf("%f %f %f %f", &r1, &r2, &r3, &r4);

    if (min(r1, r2)<min(r3, r4)) {
        printf("Min=%f", min(r1, r2));
    } else {
        printf("Min=%f", min(r3, r4));
    }

    if (max(r1, r2)>max(r3, r4)) {
        printf("\nMax=%f", max(r1, r2));
    } else {
        printf("\nMax=%f", max(r3, r4));
    }
}
