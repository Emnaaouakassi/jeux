#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "victor.h"

void initialiser_enemy(enemy *victor)
{
	victor->image=NULL ; 
	victor->image=IMG_Load("victor_demon.png");
	victor->pos_image.x=0; 
	victor->pos_image.y=0; 
}
void affichage_enemy(SDL_Surface *screen,enemy *victor)
	{
	SDL_BlitSurface(victor->image,NULL,screen,&victor->pos_image);
	
	}


