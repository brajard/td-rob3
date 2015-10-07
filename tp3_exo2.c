#include <stdio.h>
#include <time.h>
#define N 20

int main() {
  int P = 5 ;
  int i,j;
  int T[N];
  srand(time(NULL));
  //Init du tableau
  for (j=0;j<N;j++)
    {
      T[j]=rand()%P + 1;
    }

  //affichage
  for (j=0;j<N;j++)
    {
      printf("%d ",T[j]);
    }
  printf("\n");
  
  //Supression des doublons
  for (j=0;j<N;j++)
    for (i=j+1;i<N;i++)
      {
	if (T[i]!=0 && T[i]==T[j])
	  T[i]=0;
      }

 //affichage
  for (j=0;j<N;j++)
    {
      printf("%d ",T[j]);
    }
  printf("\n");
  
  return(0);
}
