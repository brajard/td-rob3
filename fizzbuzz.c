#include <stdio.h>

int main()
{
	int i;		/* compteur de la boucle */
	
	/* boucle de 1 à 100 */
	for( i=1; i<=100;i++ )
	{
		/* multiple de 3 ou se termine par 3 */
		if ( (i%3==0) || (i%10==3) )
			printf( "Fizz");
		
		/* multiple de 7 ou se termine par 7 */
		if ( (i%7==0) || (i%10==7) )
			printf( "Buzz");
			
		/* les autres cas */
		if ( (i%7) && (i%3) && (i%10!=7) && (i%10!=3) )
			printf( "%d", i);
			
		printf( " ");
	}
	
	printf( "\n");
	return 0;
}