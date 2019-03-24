#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <string.h>
#include <SDL/SDL_ttf.h>
#include "bg.h"
void backg(char nom_fich[])
{
SDL_Surface *ecran=NULL ,*image=NULL;
int continuer=1;
SDL_Event event;
image = IMG_Load(nom_fich);
SDL_Rect pose;
pose.x=-10;
pose.y=-10;
SDL_Init(SDL_INIT_EVERYTHING);
ecran=SDL_SetVideoMode(1920,1080,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
while(continuer)
{
SDL_PollEvent(&event);
switch(event.type)
{
case SDL_QUIT:
 continuer=0;
break;
}
SDL_BlitSurface(image,NULL,ecran,&pose);
SDL_Flip(ecran);


}
SDL_FreeSurface(image);
}
