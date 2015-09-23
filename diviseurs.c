#include <stdio.h>
#include <math.h>

int main(void) 
{
  int i,n;
  int isprime=1;
  int racn ;//valeur entiere de la racine de n
  printf("Entrer un entier : ");
  scanf("%d",&n);

  //Calcul de racn, les casts sont facultatifs
  racn = (int) sqrt((double)n);
  
  //Pour algo naif prendre racn=n ou n/2;

  printf("diviseurs : %d ",1);
  for (i=2;i<=racn;i++) 
    if (n%i==0) { 
      printf("%d %d ",i,n/i);
      isprime=0;
    }
  printf("%d\n",n);
  if (isprime==1)
    printf("%d est premier\n",n);
  else
    printf("%d n'est pas premier\n",n);
  return(0);
}
