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
	srand(clefCryptage);	

	longueur = longueur <= strlen(texte) ? longueur : strlen(texte);
	if(strlen(chaineCryptage) <= strlen(texte)){
		puts("La chaine de cryptage doit être plus longue que la chaine à crypter !");
		exit(-1);
	}

	for(i = 0; i < longueur; ++i) {
		char c = (char)rand();
		texte[i] = c^chaineCryptage[i];
	}
	
}

void decrypte(char phrase[], int longueur, char chaineCryptage[], int clefCryptage)
{
	int i = 0;
	srand(clefCryptage);

	longueur = longueur <= strlen(phrase) ? longueur : strlen(phrase);
	if(strlen(chaineCryptage) <= strlen(phrase)){
		puts("La chaine de cryptage doit plus longue que la chaine à crypter !");
		exit(-1);
	}
	
	for(i = 0; i < longueur; ++i) {
		char c = (char)rand();
		phrase[i] = c^chaineCryptage[i];
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
