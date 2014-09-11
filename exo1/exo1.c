/** 
 * \file exo1.c
 * \author Yann Feunteun, Yann Andreu
 * \version 0.1
 * \date 9 septembre 2014
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "exo1.h"


/**
 * Lit une phrase entrée par l'utilisateur.
 * La phrase doit être entrée entre guillemets.
 *
 * \param phrase Une tableau de char qui contiendra la chaine entrée par l'utilisateur. 
 * \return La longueur de la phrase entrée sans les guillemets.
 */
int lirePhrase(char phrase[])
{
	int i = 0;

	while(getchar()!='"'); // Consomme tous les caractères jusqu'à la détection d'un double quote
	
	while((phrase[i] = getchar()) != '"' && i <= BUFFER_SIZE -1) ++i;
    
    while (getchar()!='\n'); // Consomme tous les caractères suivant les quotes fermantes
    phrase[i] = '\0';

	return i;
}

int lireCle()
{
	int cle = 0;
	scanf("%d", &cle);

	return cle > 0 && cle < 255 ? cle : lireCle();
}

void crypte(char phrase[], int longueur, int cle)
{
	int i = 0;
	
	longueur = longueur <= strlen(phrase) ? longueur : strlen(phrase);
	for(i = 0; i < longueur; ++i) {
		phrase[i] += cle;
	}
}

void decrypte(char phrase[], int longueur, int cle)
{
	int i = 0;

	longueur = longueur <= strlen(phrase) ? longueur : strlen(phrase);
	for(i = 0; i < longueur; ++i) {
		phrase[i] -= cle;
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
