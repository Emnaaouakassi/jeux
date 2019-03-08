#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <string.h>
#include <SDL/SDL_ttf.h>
#include "menu.h"


void Menu()
{
SDL_Surface *ecran = NULL ,*quit = NULL,*newg = NULL,*option = NULL,*story = NULL,*image = NULL,*menu = NULL;
SDL_Event event;
SDL_Rect pos;
int continuer=1;
SDL_Init(SDL_INIT_EVERYTHING);
ecran=SDL_SetVideoMode(1920 ,1020,32,SDL_HWSURFACE|SDL_DOUBLEBUF);
pos.x=0;
pos.y=0;
menu = IMG_Load("menu.png");
option=IMG_Load("option.png");
newg=IMG_Load("newg.png");
story=IMG_Load("story.png");
quit=IMG_Load("quit.png");
 Uint32 SDL_GetTicks(void);
 while(continuer)
   {   
      SDL_PollEvent(&event);    
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
            
             if ((event.motion.x>=760)&&(event.motion.x<=1240)&&(event.motion.y>=330)&&(event.motion.y<=410))
                 {

             SDL_BlitSurface(newg,NULL,ecran,&pos);

         }
            else if  ((event.motion.x>=760)&&(event.motion.x<=1240)&&(event.motion.y>=425)&&(event.motion.y<=505))
        {
            
             SDL_BlitSurface(story,NULL,ecran,&pos);     
        }
            else if ((event.motion.x>=760)&&(event.motion.x<=1240)&&(event.motion.y>=520)&&(event.motion.y<=650))
        {

            
             SDL_BlitSurface(option,NULL,ecran,&pos);           

        }
        else if ((event.motion.x>=760)&&(event.motion.x<=1240)&&(event.motion.y>=690)&&(event.motion.y<=780))
        {
                      
               SDL_BlitSurface(quit,NULL,ecran,&pos);

        }
        
         
        else
                {
                 SDL_BlitSurface(menu, NULL, ecran, &pos);
                }
            break;
             
        }  
    SDL_Flip(ecran);

    }               
SDL_FreeSurface(quit);
SDL_FreeSurface(newg);
SDL_FreeSurface(story);
SDL_FreeSurface(option);
SDL_FreeSurface(image);
SDL_FreeSurface(menu);


SDL_FreeSurface(ecran);
SDL_Quit();
return 0;
}
