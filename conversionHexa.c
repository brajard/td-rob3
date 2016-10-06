
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int nb = 0;
	char c;
	/* obtenir le 1er caractère */
	c = getchar();
	/* traiter jusqu'à caractère non valide */
	while( ((c>='0') && (c<='9')) || ((c>='a') && (c<='f')) || ((c>='A') && (c<='F')) )
	{
		/* mise-à-jour de nb avec le nouveau caractère*/
		nb = nb*16;
		if ( (c>='0') && (c<='9') )
			nb = nb + (c - '0');
		else if ( (c>='a') && (c<='f') )
			nb = nb + (c - 'a' + 10);
		else
			nb = nb + (c - 'A' + 10);
			
		/* obtenir le caractère suivant */
		c = getchar();
	}
	/* afficher le résultat */
	printf("En décimal : %d\n", nb);
	return EXIT_SUCCESS;
}