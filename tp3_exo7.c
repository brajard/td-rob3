#include <stdio.h>
#include <time.h>
#define N 10

int main() {
  int P = 2 ;
  int j;
  int T[N+1];
  int s=0;
  srand(time(NULL));

  /*Init (en pratique,le calcul de s serait
    mis dans une autre boucle)*/
  for (j=0;j<N;j++)
    {
      T[j]=rand()%P;
      s+=T[j];
    }
  T[N]=s%2;

  //affichage
  for (j=0;j<N+1;j++)
    {
      printf("%d ",T[j]);
    }
  printf("\n");
  return(0);
}
