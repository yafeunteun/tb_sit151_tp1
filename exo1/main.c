#include <stdio.h>
#include <string.h>
#include "exo1.h"


int main(int argc, char *argv[])
{
	char phrase[BUFFER_SIZE];
	int cle = 0;
	int phraseLen = 0;

	puts("Entrez un entier [0..255] qui servira de cle de cryptage : ");
	cle = lireCle();

	puts("Entrez une phrase au clavier encadree par des guillemets : ");
	lirePhrase(phrase);
	phraseLen = strlen(phrase);

	crypte(phrase, phraseLen, cle);
	decrypte(phrase, phraseLen, cle);
	printf("Texte en clair : ");
	affichePhrase(phrase, phraseLen);
	
	crypte(phrase, phraseLen, cle);
	printf("Texte en crypte : ");
	affichePhrase(phrase, phraseLen);

	return 0;
}

