#include <stdio.h>
#include <string.h>
int buscar_caracter(char *cadena, char caracter) {
    char *ptr = strchr(cadena, caracter);
    if (ptr) {
        return ptr - cadena;
    } else {
        return -1;
    }
}
void ingresar_cadena_y_caracter(char *cadena, char *caracter) {
    printf("Ingrese una cadena: ");
    fgets(cadena, 100, stdin);
    printf("Ingrese el caracter a buscar: ");
    scanf("%c", caracter);
    // Eliminar el salto de línea del buffer de entrada
    getchar();
}
int main() {
    char str[100];
    char caracter;
    ingresar_cadena_y_caracter(str, &caracter);
    int posicion = buscar_caracter(str, caracter);
    if (posicion != -1) {
        printf("El caracter '%c' se encuentra en la posiciOn: %d\n", caracter, posicion);
    } else {
        printf("El caracter '%c' no se encuentra en la cadena.\n", caracter);
    }
    return 0;
}


