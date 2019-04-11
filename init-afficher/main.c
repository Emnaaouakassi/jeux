#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "fichier.h"

int main()
{
	SDL_Surface *screen=NULL;
	int continuer=1;
	SDL_Event e;
	objet objet1,objet2,objet3;
	initialiser_objet(&objet1,&objet2,&objet3);
	 screen = SDL_SetVideoMode(5760,680, 32, SDL_HWSURFACE);
	while(continuer)
	{	
		affichage_objet(screen,&objet1,&objet2,&objet3);;
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
