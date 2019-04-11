#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
typedef struct enemy {
	SDL_Surface *image;
	SDL_Rect pos_image;
	}enemy;


void initialiser_enemy(enemy *victor);
void affichage_enemy(SDL_Surface *screen,enemy *victor);
#endif
