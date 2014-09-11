#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "exo2.h"

int lirePhrase(char phrase[])
{
	int i = 0;

	while(getchar() != '"');

	while((phrase[i] = getchar()) != '"' && i <= BUFFER_SIZE -1) ++i;
       	
	
	while(getchar() != '\n');

	phrase[i] = '\0';

	return i;
}

int lireCle()
{
	int cle = 0;
	scanf("%d", &cle);

	return cle > 0 && cle < 255 ? cle : lireCle();
}

void crypte(char texte[], int longueur, char chaineCryptage[])
{
	int i = 0;
	
	longueur = longueur <= strlen(texte) ? longueur : strlen(texte);
	if(strlen(chaineCryptage) <= strlen(texte)){
		puts("La chaine de cryptage doit être plus longue que la chaine à crypter !");
		exit(-1);
	}

	for(i = 0; i < longueur; ++i) {
		texte[i] = texte[i]^chaineCryptage[i];
	}
}

void decrypte(char phrase[], int longueur, char chaineCryptage[])
{
	int i = 0;

	longueur = longueur <= strlen(phrase) ? longueur : strlen(phrase);
	if(strlen(chaineCryptage) <= strlen(phrase)){
		puts("La chaine de cryptage doit plus longue que la chaine à crypter !");
		exit(-1);
	}

	for(i = 0; i < longueur; ++i) {
		phrase[i] = phrase[i]^chaineCryptage[i];
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
