#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "animation.h"

int main()
{
	SDL_Surface *screen=NULL;
	int continuer=1;
	SDL_Event e;
	entite f1,f2,f3,f4;
	initialiser_entite(&f1,&f2,&f3,&f4);
	 screen = SDL_SetVideoMode(5760,680, 32, SDL_HWSURFACE);
	while(continuer)
	{	
		affichage_entite(screen,&f1,&f2,&f3,&f4);
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
