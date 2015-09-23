#include<stdio.h>

int main(void)
{
  int n,c=0;
  printf("Entrer un entier : ");
  scanf("%d",&n);
  while (n != 0)
    {
      if(n%10 ==1)
	c++;
      n/=10;
    }
  printf("%d\n",c);
  return(0);
}
