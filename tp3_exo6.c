#include <stdio.h>
#include <time.h>
#define N 20

int main() {
  int P = 3 ;
  int i,j,k,tmp;
  int T[N];
  srand(time(NULL));
  //Init du tableau
  T[0]=rand()%P;
  for (k=1;k<N;k++)
    {
      T[k]=T[k-1]+rand()%P;
    }

  //affichage
  for (k=0;k<N;k++)
    {
      printf("%d ",T[k]);
    }
  printf("\n");
  
  //Mélange
  for (i=0;i<N-1;i++)
    {
      j=rand()%(N-i-1)+i+1;
      tmp=T[i];
      T[i]=T[j];
      T[j]=tmp;
    }
    
 //affichage
  for (k=0;k<N;k++)
    {
      printf("%d ",T[k]);
    }
  printf("\n");
  return(0);
}
