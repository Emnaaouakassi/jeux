#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "gestion_vie.h"


		void gestion_vie (personnage *p ,int *coeur, int *coeur1 ,  SDL_Surface *ecran , int *r,SDL_Color rouge )
{
		if (p->nombre_vie==2 && (*coeur)==0)
		{

	p->affichage_vie=IMG_Load("vie2.png");
	(*coeur)=1;

	}

	if (p->nombre_vie==1 && (*coeur1)==0)
	{p->affichage_vie=IMG_Load(".png");
	(*coeur1)=1;
	}

	if (p->nombre_vie==0)
	{
		
	p->affichage_vie=IMG_Load(".png");
	p->affichage_hero=IMG_Load(".png");
Afficher_Personnage (p , ecran);

		SDL_Flip(ecran);
		SDL_Delay(1000);

	}
