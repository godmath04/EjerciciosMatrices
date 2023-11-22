/*Construya un programa en lenguaje C que:

    Cree una matriz cuyas dimensiones sean ingresadas por el usuario. La matriz puede tener cualquier dimensión.
    Inicialice toda la matriz en ceros.
    Imprima la matriz con la diagonal principal con valores en 1.

Entregue la URL a su repositorio de Github.*/

#include <stdio.h>
#include <string.h>
#include <time.h>

int main()
{
    // Asignación de numero de filas y columnas
    int filas = 0, columnas = 0;
    printf("Ingrese el numero de filas: \n");
    scanf("%d", &filas);
    printf("Ingrese el numero de columnas: \n");
    scanf("%d", &columnas);

    // Declaración de la matriz
    int matriz[filas][columnas];

    printf("Su matriz A = \n");
    for (int i = 0; i < filas; i++)
    {
        printf("|  ");
        for (int j = 0; j < columnas; j++)
        {
            matriz[i][j] = 0;
            printf(" %d  |", matriz[i][j]);
        }
        printf("\n");
    }

    // Cambio de valor de la diagonal a 1
    for (int i = 0; i < filas && i < columnas; i++)
    {
        matriz[i][i] = 1;
    }

    printf("Su matriz A con diagonal de 1 es, A = \n");
    for (int i = 0; i < filas; i++)
    {
        printf("|  ");
        for (int j = 0; j < columnas; j++)
        {
            printf(" %d  |", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
