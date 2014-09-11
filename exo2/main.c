#include <stdio.h>
#include <string.h>
#include "exo2.h"


int main(int argc, char *argv[])
{
	char phrase[BUFFER_SIZE];
	char *chaineCryptage = "Architecture et Langage C";
	int phraseLen;


	puts("Entrez une phrase au clavier encadree par des guillemets : ");
	phraseLen = lirePhrase(phrase);

	crypte(phrase, phraseLen, chaineCryptage);
	printf("Texte en crypte : ");
	affichePhrase(phrase, phraseLen);

	crypte(phrase, phraseLen, chaineCryptage);
	printf("Texte en clair : ");
	affichePhrase(phrase, phraseLen);

	return 0;
}

