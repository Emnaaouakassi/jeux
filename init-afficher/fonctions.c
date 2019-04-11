#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "fichier.h"

void initialiser_objet(objet *objet1 ,objet *objet2, objet *objet3)
	{
	objet1->image=NULL ; 
	objet1->image=IMG_Load("objet1.png");
	objet1->pos_image.x=600; 
	objet1->pos_image.y=200 ; 
	
	objet2->image=NULL ; 
	objet2->image=IMG_Load("objet2.png");
	objet2->pos_image.x=1355 ; 
	objet2->pos_image.y=0 ; 

	objet3->image=NULL ; 
	objet3->image=IMG_Load("objet3.png");
	objet3->pos_image.x=1355 ; 
	objet3->pos_image.y=0 ; 
	}

void affichage_objet(SDL_Surface *screen,objet *objet1,objet *objet2, objet *objet3)
	{
	SDL_BlitSurface(objet1->image,NULL,screen,&objet1->pos_image);
	SDL_BlitSurface(objet2->image,NULL,screen,&objet2->pos_image);
	SDL_BlitSurface(objet3->image,NULL,screen,&objet3->pos_image);
	}


