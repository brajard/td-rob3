/*=====================================
*
*     oO  multiplication matrices   Oo
*
*=====================================
*
* File : multiplicationMatrices.c
* Date : 10sept 09
* Author : Hilaire Thibault
*
*=====================================
*
* Notions: 
* - boucle
* - indices math (de 1 à N) vs indices C (de 0 à N-1)
*/


#include <stdio.h>
#include <stdlib.h>

#define N 5

int main(void)
{
	/* compteurs pour les boucles */
	int i,j,k;				
	/* utilise comme somme partielle pour le produit */
	float sum;				
	float A[N][N];
	float B[N][N];
	float C[N][N];
	
	/* création de la matrice A */
	for( i=0; i<N; i++)
		for( j=0; j<N; j++)
			A[i][j] = (i+1) + 3*(j+1);
			
	/* creation de la matrice B */
	for( i=0; i<N; i++)
	{
		for( j=0; j<N; j++)
		{
			if (i==j)
				B[i][j] = 1;
			else
				B[i][j] = (i+1)*(j+1);
		}
	}
	/* affichage de la matrice B */
	for( i=0; i<N; i++)
	{
		for( j=0; j<N; j++)
		{
			printf("%f ",B[i][j]);
		}
		printf("\n");
	}
	/* calcul de C */
	for( i=0; i<N; i++)
	{
		for( j=0; j<N; j++)
		{
			sum = 0;
			for( k=0; k<N; k++)
			{
				sum = sum + A[i][k]*B[k][j];
			}
			C[i][j] = sum;
		}
	}
	/* affichage de la matrice C */
	for( i=0; i<N; i++)
	{
		for( j=0; j<N; j++)
		{
			printf("%f ",C[i][j]);
		}
		printf("\n");
	}		
	return EXIT_SUCCESS;
}
