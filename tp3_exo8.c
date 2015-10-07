#include <stdio.h>
#include <time.h>
//Taille de la grille :
#define L 4
#define C 4

//Nombre de bateaux
#define NB 5

int main() {
  int i,j,n;
  int it,jt;
  int T[L][C];
  int pt = 7;
  srand(time(NULL));
  for (i=0;i<L;i++)
    for (j=0;j<C;j++)
    {
      T[i][j]=0;
    }
  n=0;
  while (n<NB) {
    it = rand()%L;
    jt = rand()%C;
    if (T[it][jt]==0) {
      T[it][jt]=1;
      n++;
    }
  }
  n=0 ; //Nbre de bateaux touchés
  while(n<NB && pt>0) {
    printf("  ");
    for (j=0;j<C;j++)
      printf("%d ",j);
    printf("\n");
    for (i=0;i<L;i++) {
      printf ("%d ",i);
      for (j=0;j<C;j++)
	switch (T[i][j]) {
	case 0 : printf("  ");
	  break;
	case 2 : printf("x ");
	  break;
	case 3 : printf("o ");
	  break; 
	}
      printf("\n");
    } // end for i
    printf("Vous avez %d points et touché %d bateaux.\n",pt,n);

    printf("\nEntrer coordonnées du point visé (ligne puis colonne) :\n");
    scanf("%d %d",&it,&jt);
    if (T[it][jt]==0) {
      T[it][jt]=2;
      pt--;
    }
    else if (T[it][jt]==1) {
      T[it][jt]=3;
      n++;
    }
  }//end while
  
  printf("Vous avez %d points et touché %d bateaux.\n",pt,n);
  
}
