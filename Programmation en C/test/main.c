#include <stdio.h>
#include <stdlib.h>

float moy(float a, float b) {
    float res = (a+b)/2;
    return res;
}

void main() {
    float n1, n2;
    printf("Donner note 1:\n");
    scanf("%f", &n1);
    printf("Donner note 2:\n");
    scanf("%f", &n2);
    printf("Moyenne est %f", moy(n1, n2));
}


