#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define N 20

int main() {
  int P = 5 ;
  int j;
  int T[N];
  int n;
 
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
  
  //Recherche element
  printf("Element a chercher: ");
  scanf("%d",&n);
  j=0;
  while(j<N && T[j]!=n) {
    j++;
  }
  if (T[j]==n) 
    printf("%d\n",j);
  else
    printf("%d not found\n",n);
  
  return(0);
}
