#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
typedef struct ob {
	SDL_Surface *image;
	SDL_Rect pos_image;
	}objet;


void initialiser_objet(objet *objet1,objet *objet2, objet *objet3);
void affichage_objet(SDL_Surface *screen,objet *objet1,objet *objet2, objet *objet3);
#endif
