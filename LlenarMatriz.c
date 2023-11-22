/*Ingrese las dimensiones de la matriz
y se sumara los elementos de su diagonal */

#include <stdio.h>

int main()
{
    // Numero de filas y columnas
    int n = 0, m = 0, suma = 0;
    printf("Ingrese el numero de filas: \n");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas: \n");
    scanf("%d", &m);

    // Declaración de la matriz
    int matriz[n][m];

    // Datos de la matriz
    printf("Ingrese los datos a su matriz, se irá llenando por filas\n");
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("Ingrese el numero %d %d: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
            printf("\n");
        }
    }

    // Mostrar la matriz
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%4d  |", matriz[i][j]);
        }
        printf("\n");
        
    }
    // Sumatoria de la diagonal
    for (int i = 0; i < n && i < m ; i++)
    {
        suma = suma + matriz[i][i];
    }
    printf("La suma de la diagonal es: %d", suma);
    

    return 0;
}
