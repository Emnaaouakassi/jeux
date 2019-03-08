
#include "victor.h"
int main() 
{ 
    
    SDL_Surface *ecran =NULL; 
    SDL_Surface *image =NULL,*personage=NULL; 
    SDL_Rect positionecran,positionpersonage; 
    char pause; 
    int continuer =1,curseur=1; 
 
    SDL_Event event; 

      
     
    personage=IMG_Load("victor_demon.png"); 
   
   SDL_SetColorKey(personage, SDL_SRCCOLORKEY, SDL_MapRGB(personage->format, 255, 255, 255));  

    positionecran.x=-10; 
    positionecran.y=-10; 
    positionpersonage.x=0; 
    positionpersonage.y=20; 
    
    SDL_Init(SDL_INIT_VIDEO); 
 
    ecran = SDL_SetVideoMode(1600, 400, 32, SDL_HWSURFACE ); 
    while (continuer) 
    { 
     SDL_WaitEvent(&event); 
        SDL_BlitSurface(image, NULL, ecran, &positionecran); 
        SDL_BlitSurface(personage,NULL,ecran,&positionpersonage); 
        SDL_Flip(ecran); 
        switch (event.type) 
        { 
        case SDL_QUIT: 
            continuer=0; 
            break; 
        case SDL_KEYDOWN: 
            switch (event.key.keysym.sym) 
            { 
            case SDLK_ESCAPE: 
                continuer=0; 
                break; 
            case SDLK_RIGHT: 
                positionpersonage.x=positionpersonage.x+10; 
                break; 
            case SDLK_LEFT: 
                positionpersonage.x--; 
                break; 
            } 
        } 
    } 
    SDL_FreeSurface(image); 
    SDL_FreeSurface(personage); 
 
    return 0; 
}
 	
