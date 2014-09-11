#include <stdio.h>
#include <string.h>
#include "exo3.h"


int main(int argc, char *argv[])
{
	char phrase[BUFFER_SIZE];
	char *chaineCryptage = "Architecture et Langage C";
	int phraseLen = 0, clefCryptage = 55;

	puts("Entrez une phrase au clavier encadree par des guillemets : ");
	lirePhrase(phrase);
	phraseLen = strlen(phrase);

	crypte(phrase, phraseLen, chaineCryptage, clefCryptage);
	decrypte(phrase, phraseLen, chaineCryptage, clefCryptage);
	printf("Texte en clair : ");
	affichePhrase(phrase, phraseLen);
	
	crypte(phrase, phraseLen, chaineCryptage, clefCryptage);
	printf("Texte en crypte : ");
	affichePhrase(phrase, phraseLen);

	return 0;
}

