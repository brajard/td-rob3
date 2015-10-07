#include <stdio.h>
#include <time.h>
#define N 20

int main() {
  int P = 3 ;
  int j;
  int T[N];
  srand(time(NULL));
  //Init du tableau
  T[0]=rand()%P;
  for (j=1;j<N;j++)
    {
      T[j]=T[j-1]+rand()%P;
    }

  //affichage
  for (j=0;j<N;j++)
    {
      printf("%d ",T[j]);
    }
  printf("\n");
  
  //Supression des doublons
  int n=-1;
  for (j=0;j<N;j++)
    {
      if (T[j]==n)
	T[j]=0;
      else
	n=T[j];
    }
    
 //affichage
  for (j=0;j<N;j++)
    {
      printf("%d ",T[j]);
    }
  printf("\n");
  return(0);
}
