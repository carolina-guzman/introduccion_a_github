#include <stdio.h>

int main(){
    char n[100];

    printf("Hola mundo\n");
    printf("Nombre: ");
    fgets(n, sizeof(n), stdin);
    printf("Hola %s", n);

    return 0;
}