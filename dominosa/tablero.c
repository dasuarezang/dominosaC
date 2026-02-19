#include <stdio.h>
#include "colores.h"
#include "tablero.h"
#include <string.h>

void mostrartablero (t_tablero *pt)
	{	
		int err, f, c, n, nf, nc, num;
		char nombre_fichero[SIZE_NOMBRE_FICHERO];
		
	
		printf("Introduce el nombre del fichero: ");
		scanf("%s%*c", nombre_fichero);
		err = abrir_fichero(nombre_fichero);
		if (err != ABRIR_FICHERO_OK) 
		{
		
		printf("ERROR: FICHERO NO ENCONTRADO.\n");
		printf("PUEDE QUE EL NOMBRE NO SEA EL CORRECTO O QUE ESTE EN OTRO DIRECTORIO.\n");
		
		} 
		
		else 
		{
			n = leer_int_fichero();
			nf = leer_int_fichero();
			nc = leer_int_fichero();
			printf("Dominosa %dx%d, fils = %d, cols = %d\n\n", n, n, nf, nc);
			
			for (f = 0; f < nf; f++) 
			{
				for (c = 0; c < nc; c++) 
				{
					pt->tablero[f][c].valor = leer_int_fichero();
				
				}
			}
				
			cerrar_fichero();
		}
		
	
	
		//------------------------------------------------------------------------------------------------
	
		for (c=0; c < nc; c++)		//IMPRIMIMOS CABECERA SUPERIOR
		{	
			printf ("   %d", c); 	
		}
	
							//i columnas y k filas
		printf ("\n");
		printf (" ");	
		
		for (c=0; c < nc; c++)
		{

			printf ("+---");		// +---+---+---+---+ 
		
		}
	
		printf ("+");
		printf ("\n");
	
					//FINAL CABECERA SUPERIOR
		
				
		for (c=0; c< nf; c++)
		{	
			f= 'A' + c;
			printf ("%c|", f);	//IMPRIMIMOS CABECERA LATERAL Y INTERIOR 
		
		
			for (f=0; f<nc; f++)
			{	
				printf_color_num(pt->tablero[c][f].valor);
				printf (" %d  ", pt->tablero[c][f].valor); //" %d  ", tablero[c][f]
				printf_reset_color();
			}
		
			printf ("\n");
		
			for (f=0; f<nc; f++)
			{	printf (" +  "); //IMPRIME BARRA +

			}
		
			printf (" +  ");
		
			printf ("\n");
		}
	}


