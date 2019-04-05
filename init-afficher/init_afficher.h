
#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
typedef struct objet{
	SDL_Surface *objet1;
	SDL_Surface *objet2;
	SDL_Surface *objet3;
	SDL_Rect posobjet1;
	SDL_Rect posobjet2;	
	SDL_Rect posobjet3;
}objet;
void initialiser_objet(objet *obj);
void affichage_objet(objet *obj,SDL_Surface *ecran);

#define LARGEUR_FENETRE 1000
#define HAUTEUR_FENETRE 1000


#endif
