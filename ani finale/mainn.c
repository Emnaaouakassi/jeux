
#include "Ennemi.h"
int main()
{
int k=0;



SDL_Surface *ecran=NULL,*bg =NULL;
SDL_Event e;
ennemi f;
SDL_Rect positionecran;
int continuer =1;
positionecran.x=0;
positionecran.y=0;
bg =IMG_Load("back.png");
initialiser_f (&f);
SDL_Init(SDL_INIT_VIDEO);
ecran = SDL_SetVideoMode(4000, 1080, 32, SDL_HWSURFACE |SDL_DOUBLEBUF);
    while (continuer)
    {
	SDL_WaitEvent(&e);
        SDL_BlitSurface(bg, NULL, ecran, &positionecran);
	SDL_Flip(ecran);
	dep_f(&f,ecran);


}
return 0;
}

