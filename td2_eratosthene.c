/*=====================================
*
*     oO  Crible d'Eratosthne   Oo
*
*=====================================
*
* File : td2_eratosthene.c
* Date : 18sept 2017
* Author : Julien brajard
*
*=====================================
*
* Notions: 
* - parcours de tableau
* - Modification en place d'un tableau
*/


#include <stdio.h>
#include <stdlib.h>

#define N 100

int main(void)
{
  /* compteurs pour les boucles */
  int n0,k;
    
  /* tableau d'entier (à modifier) */
  int T[N-1];
  
  /* Initialisation du tableau */
  for (k=2;k<=N;k++) {
    T[k-2] = k;
  }

  /* Boucle principale de parcours */
  for (n0=2;n0<=N/2;n0++) {
    /* Inutile d'aller au dela de N/2, car 
       il n'yaura pas de multiple <=N */
    if (T[n0-2] > 0) { //entier non exclu precemment, donc premier
	/* Boucle pour éliminer des éléments */
	for (k=2*n0 ; k<=N;k+=n0) {
	  T[k-2] = -1 ;
	}
      }
  }

  /*Affichage des nombres premiers */
  for (k=2;k<=N;k++) {
    if (T[k-2] > 0) {
      printf ("%d ",T[k-2]);
    }
  }
  printf("\n");
  return EXIT_SUCCESS;
}
