
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES
void Afficher_Personnage (ennemy *victor , SDL_Surface *ecran);
ennemy Initialiser_Personnage (ennemy victor);
SDL_Rect position_ennemy;
SDL_Rect frame;
SDL_Surface *affichage_ennemy;
#define LARGEUR_FENETRE 1000
#define HAUTEUR_FENETRE 1000


#endif
