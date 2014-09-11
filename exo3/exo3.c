#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "exo3.h"

int lirePhrase(char phrase[])
{
	int i = 0;

	getchar(); 
	while((phrase[i] = getchar()) != '\n' && i <= BUFFER_SIZE -1) ++i;
       	
	if(phrase[i-1] == '"') {
		phrase[i-1] = '\0';
	}

	return strlen(phrase -2);
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
