#include "init_afficher.h"
void initialiser_objet(objet *obj)
{
obj->objet1 = IMG_Load("objet1.png");
obj->objet2 =IMG_Load("objet2.png");
obj->objet3=IMG_Load("objet3.png");

obj->posobjet1.x=1000;
obj->posobjet1.y=900;

obj->posobjet2.x=1000;
obj->posobjet2.y=900;

obj->posobjet3.x=1000;
obj->posobjet3.y=900;


}

void affichage_objet(objet *obj,SDL_Surface *ecran)
{
	
		SDL_BlitSurface(obj->objet1,NULL,ecran,&obj->posobjet1);
		obj->posobjet1.x-=50;
		SDL_BlitSurface(obj->objet2  , NULL , ecran , &obj->posobjet2);
		obj->posobjet2.x-=50;
                SDL_BlitSurface(obj->objet3  , NULL , ecran , &obj->posobjet3);
		obj->posobjet3.x-=50;

}

