#include <stdio.h>
#include <string.h>
#include "exo3.h"


int main(int argc, char *argv[])
{
	char phrase[BUFFER_SIZE];
	char *chaineCryptage = "Architecture et Langage C";
	int phraseLen = 0, clefCryptage = 0;
    
    do
    {
        puts("Entrez un entier entre 0 et 255 pour le générateur de nombres pseudo-aléatoires (clé cryptage) : ");
        scanf("%d", &clefCryptage);
    }
    while (clefCryptage<0 || clefCryptage>255);
	
    
    puts("Entrez une phrase au clavier encadree par des guillemets : ");
	phraseLen = lirePhrase(phrase);

	crypte(phrase, phraseLen, chaineCryptage, clefCryptage);
	printf("Texte en crypte : ");
	affichePhrase(phrase, phraseLen);
	
	crypte(phrase, phraseLen, chaineCryptage, clefCryptage);
	printf("Texte en clair : ");
	affichePhrase(phrase, phraseLen);

	return 0;
}

