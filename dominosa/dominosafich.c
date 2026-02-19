#include <stdio.h>
#include "colores.h"
#include "tablero.h"
#include "fichero.h"

int main()
{
    t_tablero tab;
    t_tablero (*pt) = &tab;

    char loop;

    do
    {
        mostrartablero(pt);

        printf("\n");
        printf("Casillas a conectar/desconectar (ej: [A0B0]): ");
        printf("\n");

        scanf(" %c", &loop);

    } while (loop != '1');

    return 0;
}

