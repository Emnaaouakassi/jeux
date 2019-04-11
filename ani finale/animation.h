#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <unistd.h> 
typedef struct ob {
	SDL_Surface *image;
	SDL_Rect pos_image;
	}entite;
         void initialiser_entite(entite *f1,entite *f2,entite *f3, entite *f4);
         void affichage_entite(SDL_Surface *screen,entite *f1,entite *f2,entite *f3, entite *f4);


#endif
