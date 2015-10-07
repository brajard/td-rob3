#include <stdio.h>
#include <time.h>
#define N 10

int main() {
  int P = 5 ;
  int j;
  int T[N];
  srand(time(NULL));
  for (j=0;j<N;j++)
    {
      T[j]=rand()%P + 1;
    }
  for (j=0;j<N;j++)
    {
      printf("%d ",T[j]);
    }
  printf("\n");
  return(0);
}
