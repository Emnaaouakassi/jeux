#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <string.h>
#include <SDL/SDL_ttf.h>
#include "enigme.h"

enigme init_engime(char ch[50],char ch0[50],int lvl)
{
	enigme E;


	E.question = IMG_Load(ch);
	E.reponse = IMG_Load(ch0);
	E.diff_lvl = lvl;

	return E;
}

void aff_question(SDL_Surface *ecran,enigme E)
{
	SDL_Rect pos;
	pos.x = 0;
	pos.y = 0;

	SDL_BlitSurface(E.question,NULL,ecran,&pos);
}

void aff_reponse(SDL_Surface *ecran,enigme E)
{
	SDL_Rect pos;
	pos.x = 0;
	pos.y = 0;

	SDL_BlitSurface(E.reponse,NULL,ecran,&pos);
}

