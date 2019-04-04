#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES
/* Structure pour gérer la vie de notre héro */
int nombre_vie;
SDL_Surface *affichage_vie;
SDL_Rect position_vie;
void gestion_vie (personnage *p ,int *coeur, int *coeur1 ,  SDL_Surface *ecran , int *r,SDL_Color rouge );
#define LARGEUR_FENETRE 1000
#define HAUTEUR_FENETRE 1000


#endif
