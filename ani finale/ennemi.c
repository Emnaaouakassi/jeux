#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "/usr/include/SDL/SDL.h"
#include "/usr/include/SDL/SDL_image.h"
#include "/usr/include/SDL/SDL_mixer.h"
#include "/usr/include/SDL/SDL_ttf.h"
#include "Ennemi.h"


void initialiser_f (ennemi *f)
{
     
f->pos_f.x=0;
f->pos_f.y=265;
f->image=IMG_Load("f1.png");

}


void afficher_f(ennemi *f,SDL_Surface *ecran)
{
 SDL_BlitSurface(f->image, NULL, ecran, &f->pos_f);
 SDL_Flip(ecran);
 

}
void dep_f(ennemi *f,SDL_Surface *ecran)
{SDL_Surface  *imageDeFond = IMG_Load("back.png");
    SDL_Rect positionFond,pos;
   

SDL_Surface *walk[5], *back[5];
   int i=0,j=0;

	walk[0]=IMG_Load("f1.png");
	walk[1]=IMG_Load("f2.png");
	walk[2]=IMG_Load("f1.png");
	walk[3]=IMG_Load("f2.png");

	back[0]=IMG_Load("f3.png");
	back[1]=IMG_Load("f4.png");
	back[2]=IMG_Load("f3.png");
	back[3]=IMG_Load("f4.png");
   

   int done=1,k=0;
    positionFond.x = 0;
    positionFond.y =0;
    pos.x=0;
    pos.y=400;

    SDL_Init(SDL_INIT_VIDEO);

    ecran = SDL_SetVideoMode(4000, 1080, 32, SDL_HWSURFACE);
    SDL_WM_SetCaption("yassine", NULL);

    
	imageDeFond = IMG_Load("back.png");
	SDL_Flip(ecran);
    
   while(done)
   {

j=4;
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
SDL_BlitSurface(walk[i], NULL, ecran, &pos);
SDL_Flip(ecran);    
    SDL_Delay(100);
    pos.x+=10;

i++;
if(i>=4)
{

i=0;

}

if(pos.x>=900)
{

while(j>=0)
{
    
	 SDL_Flip(ecran);
	SDL_Delay(100);
SDL_BlitSurface(imageDeFond, NULL, ecran, &positionFond);
SDL_BlitSurface(back[j], NULL, ecran, &pos);

    pos.x-=10;

j--;
   

if(j<=0)
{

   

    j=4;
}


if(pos.x==0)
{

    break;
}
}

}
k++;


   } 
   




    SDL_FreeSurface(imageDeFond);
    SDL_Quit();}
