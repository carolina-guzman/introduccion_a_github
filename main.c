#include <stdio.h>

int main(){
    char n[100];
    unsigned int e;

    //printf("Hola mundo\n");
    printf("Nombre: ");
    fgets(n, sizeof(n), stdin);
    printf("Hola %s", n);

    printf("Edad: ");
    scanf("%u", &e);
    printf("Edad proxima: %u", e+1);

    return 0;
}