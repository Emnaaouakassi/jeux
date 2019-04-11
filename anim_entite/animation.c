#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "animation.h"

void initialiser_entite(entite *f1,entite *f2,entite *f3, entite *f4)
	{

	f1->image=NULL ; 
	f1->image=IMG_Load("f1.png");
	f1->pos_image.x=800 ; 
	f1->pos_image.y=400 ; 

	f2->image=NULL ; 
	f2->image=IMG_Load("f2.png");
	f2->pos_image.x=800 ; 
	f2->pos_image.y=400; 

	f3->image=NULL ; 
	f3->image=IMG_Load("f3.png");
	f3->pos_image.x=1000 ; 
	f3->pos_image.y=400 ; 

	f4->image=NULL ; 
	f4->image=IMG_Load("f4.png");
	f4->pos_image.x=1000 ; 
	f4->pos_image.y=400 ; 

	}

         void affichage_entite(SDL_Surface *screen,entite *f1,entite *f2,entite *f3, entite *f4)
	{
	int continuer=1 ;
	SDL_FillRect(screen, NULL,SDL_MapRGB(screen->format,0,0,0));	
	SDL_BlitSurface(f1->image,NULL,screen,&f1->pos_image);
	SDL_BlitSurface(f3->image,NULL,screen,&f3->pos_image);
	
	SDL_Flip(screen);
	usleep(3000000) ; 
	
	
	SDL_FillRect(screen, NULL,SDL_MapRGB(screen->format,0,0,0));	
	SDL_BlitSurface(f2->image,NULL,screen,&f2->pos_image);
	SDL_BlitSurface(f4->image,NULL,screen,&f4->pos_image);

	SDL_Flip(screen);
	usleep(3000000) ; 
	
	
	}
	

