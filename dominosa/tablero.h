#ifndef TABLERO_H
#define	TABLERO_H

#include "fichero.h"
#include "tablero.h"

typedef struct
{
	int valor;
	int sur, oeste;
}t_casilla;

typedef struct
{
	int nfil, ncol;
	t_casilla tablero[10][11];
}t_tablero;

void mostrartablero(t_tablero *pt); 


#endif	
