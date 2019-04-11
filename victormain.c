#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "victor.h"

int main()
{
	SDL_Surface *screen=NULL;
	int continuer=1;
	SDL_Event e;
	enemy victor;
	initialiser_enemy(&victor);
	 screen = SDL_SetVideoMode(5760,680, 32, SDL_HWSURFACE);
	while(continuer)
	{	
		affichage_enemy(screen,&victor);;
		SDL_Flip(screen);
		SDL_Delay(100);
		while(SDL_PollEvent(&e));
    	switch(e.type)
    	{
	case SDL_QUIT:
	continuer=0 ; 
	}
}
return 0;
}

