#include<stdio.h>

int main(void)
{
  int um1=1,um2=1,un,n,i;
  printf("Entrer un entier : ");
  scanf("%d",&n);
  if (n<2)
    printf("1\n");
  else 
    {
      for (i=2;i<=n;i++)
	{
	  un  = um1+um2;
	  um2 = um1 ;
	  um1 = un ;
 	}
      printf("%d\n",un);
    }
  return(0);
}
