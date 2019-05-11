/**
 * @file menu.c
 */
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <string.h>
#include <SDL/SDL_ttf.h>
#include "menu.h"


/**
 * @brief To initialize and blit the options.
 * @param nothing
 * @return choice of the controller
 */
int opt()
{

SDL_Surface *op=NULL;
SDL_Event event;
SDL_Rect pos;
int continuer=1;
int k=0;
pos.x=0;
pos.y=0;
op=IMG_Load("option.png");
SDL_Surface *ecran;
SDL_Init(SDL_INIT_EVERYTHING);
ecran=SDL_SetVideoMode(1658,1022,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
while(continuer)
   {   
SDL_BlitSurface(op,NULL,ecran,&pos);
int coorx = event.button.x;
int coory = event.button.y;
     while( SDL_PollEvent(&event))
{  
  
    switch (event.type)
    {
       case SDL_QUIT:
        {continuer=0;
             break;
          case SDL_KEYDOWN:
            if(event.key.keysym.sym==SDLK_ESCAPE)
           continuer =0;
          }break;
case SDL_MOUSEBUTTONDOWN :
      {
       if(coorx>=80 && coorx<=270 && coory>=140 && coory <=310)
          {
         k=1;
           }
	else if(coorx>=80 && coorx<=270 && coory>=350 && coory <=520)
         {
         k=2;
	 } 
else if(coorx>=80 && coorx<=270 && coory>=560 && coory <=730)
         {
	k=3;
	 } }break;}
    SDL_Flip(ecran);
}
SDL_FreeSurface(ecran);
}
return k;
}
/**
 * @brief To initialize and blit the menu.
 * @param nothing
 * @return choice of the button
 */
int Menu()
{
SDL_Surface *quit = NULL,*newg = NULL,*option = NULL,*story = NULL,*image = NULL,*menu = NULL,*Quit = NULL,*Newg=NULL,*Story=NULL,*Option=NULL;
SDL_Event event;
SDL_Rect pos;
SDL_Surface *ecran;
SDL_Init(SDL_INIT_EVERYTHING);
ecran=SDL_SetVideoMode(1658,1022,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
int continuer=1;
int k=0,j;
pos.x=0;
pos.y=0;
menu = IMG_Load("menu.png");
option=IMG_Load("3p.png");
newg=IMG_Load("1p.png");
story=IMG_Load("2p.png");
quit=IMG_Load("4p.png");
Option=IMG_Load("B3.png");
Newg=IMG_Load("B1.png");
Story=IMG_Load("B2.png");
Quit=IMG_Load("B4.png");
 Uint32 SDL_GetTicks(void);
 while(continuer)
   {   
SDL_BlitSurface(menu, NULL, ecran, &pos);
SDL_BlitSurface(Story, NULL, ecran, &pos);
SDL_BlitSurface(Newg, NULL, ecran, &pos);
SDL_BlitSurface(Quit, NULL, ecran, &pos);
SDL_BlitSurface(Option, NULL, ecran, &pos);
int coorx = event.button.x;
int coory = event.button.y;
     while( SDL_PollEvent(&event))
{  
  
    switch (event.type)
    {
       case SDL_QUIT:
        continuer=0;
             break;
          case SDL_KEYDOWN:
            if(event.key.keysym.sym==SDLK_ESCAPE)
              {
           continuer =0;
            break;
          }
                
                      
     case SDL_MOUSEMOTION:
{
            
             if ((event.motion.x>=80)&&(event.motion.x<=270)&&(event.motion.y>=140)&&(event.motion.y<=310))
                 {

             SDL_BlitSurface(newg,NULL,ecran,&pos);


         }
            else if  ((event.motion.x>=80)&&(event.motion.x<=270)&&(event.motion.y>=350)&&(event.motion.y<=520))
        {
            
             SDL_BlitSurface(story,NULL,ecran,&pos); 
   
        }
            else if ((event.motion.x>=80)&&(event.motion.x<=270)&&(event.motion.y>=560)&&(event.motion.y<=730))
        {

            
             SDL_BlitSurface(option,NULL,ecran,&pos);  



        }
        else if ((event.motion.x>=80)&&(event.motion.x<=270)&&(event.motion.y>=770)&&(event.motion.y<=840))
        {
                      
               SDL_BlitSurface(quit,NULL,ecran,&pos);


        }

        
         
        
}
            break;
      case SDL_MOUSEBUTTONDOWN :
      {
       if(coorx>=80 && coorx<=270 && coory>=140 && coory <=310)
          {
         k=1;
           }
	else if(coorx>=80 && coorx<=270 && coory>=350 && coory <=520)
         {
         k=2;
	 } 
else if(coorx>=80 && coorx<=270 && coory>=560 && coory <=730)
         {
SDL_FreeSurface(ecran);
	j=opt();
	 } 
       else if(coorx>=80 && coorx<=270 && coory>=770 && coory <=840)
         {
	continuer=0;
	 }      
      }
            break;
             }

    SDL_Flip(ecran);

    }   }            
SDL_FreeSurface(quit);
SDL_FreeSurface(newg);
SDL_FreeSurface(story);
SDL_FreeSurface(option);
SDL_FreeSurface(image);
SDL_FreeSurface(menu);

printf("%d",k);
SDL_FreeSurface(ecran);
SDL_Quit();
return 0;
}


