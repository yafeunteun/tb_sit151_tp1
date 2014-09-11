#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "exo3.h"

int lirePhrase(char phrase[])
{
	int i = 0;

	while(getchar() != '"');

	while((phrase[i] = getchar()) != '"' && i <= BUFFER_SIZE -1) ++i;
       	
	
	while(getchar() != '\n');

	phrase[i] = '\0';

	return i;
}


void crypte(char texte[], int longueur, char chaineCryptage[], int clefCryptage)
{
	int i = 0;
	int m = strlen(chaineCryptage);
	srand(clefCryptage);	

	longueur = longueur <= strlen(texte) ? longueur : strlen(texte);

	for(i = 0; i < longueur; ++i) {
		char c = (char)rand();
		texte[i] = c^chaineCryptage[i%m];
	}
	
}


void affichePhrase(char phrase[], int longueur)
{
	int i = 0;

	longueur = longueur <= strlen(phrase) ? longueur : strlen(phrase);
	for(i = 0; i < longueur; ++i) {
		if(isprint(phrase[i])) {
			putchar(phrase[i]);
		}
	}
	puts("");
}
