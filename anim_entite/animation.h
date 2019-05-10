/**
* @file animation.h
* @brief minimap.
* @author Reckless
* @version 1
* @date May 10, 2019
*
*/
#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <unistd.h> 
/**
* @struct objet
* @brief initialiser et afficher objet
*/
typedef struct entite {
	SDL_Surface *image;/*!< Surface. */
	SDL_Rect pos_image;/*!< Rectangle*/
	}entite;
         void initialiser_entite(entite *f1,entite *f2,entite *f3, entite *f4);
         void affichage_entite(SDL_Surface *screen,entite *f1,entite *f2,entite *f3, entite *f4);


#endif
