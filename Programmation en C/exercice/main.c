#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int isPal(char ch[20]) {
    char aux[20];

    for(int i=0; i<strlen(ch); i++) {
        aux[i] = strcat(aux, ch[strlen(ch)-i-1]);
    }
    if (ch == aux) {
        return 1;
    } else {
        return 0;
    }
}

void main() {
    char ch[20];

    printf("Donner une chaine de caracteres:\n");
    scanf("%s", &ch);

    if (isPal(ch)==1) {
        printf("Pal");
    } else {
        printf("Non Pal");
    }
}
