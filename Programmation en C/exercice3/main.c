#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char ajout_ch(char ch1[20], char ch2[20]) {
    return strcat(ch1, ch2);
}

char ch1[20], ch2[20];

void main() {
    printf("Donner chaine 1:\n");
    scanf("%s", &ch1);
    printf("Donner chaine 2:\n");
    scanf("%s", &ch2);
    printf("%s", ajout_ch(ch1, ch2));
}
