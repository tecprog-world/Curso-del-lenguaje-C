#include <stdio.h>

int main()
{
    int numero = 6;
    numero = -45;
    double numero2 = 7.98;
    float numero3 = 67.67f;
    int numero4 = -7;
    double numero5 = -6.09;
    char caracter1 = '\n';
    char caracter2 = '\t';
    char caracter3 = '\\';
    char caracter4 = '\"';
    char caracter5 = '@';
    char texto[11] = "Hola mundo";

    printf("Mi numero vale %d\n", numero);
    printf("Mi numero 2 vale %lf\n", numero2);
    printf("Mi numero 2 con notacion cientifica es %g\n", numero2);
    printf("Mi numero 3 vale %f\n", numero3);
    printf("Mi numero 4 vale %d\n", numero4);
    printf("Mi numero 5 vale %lf\n", numero5);
    printf("Mi caracter1 es %c\n", caracter1);
    printf("Mi caracter2 es %c\n", caracter2);
    printf("Mi caracter3 es %c\n", caracter3);
    printf("Mi caracter4 es %c\n", caracter4);
    printf("Mi caracter5 es %c\n", caracter5);
    printf("Mi texto es un %s\n", texto);

    return 0;
}
