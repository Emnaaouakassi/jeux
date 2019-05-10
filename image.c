#include <stdio.h>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_gfxBlitFunc.h>
int main(int argc , char *argv[]){
                printf("SDL Image display \n");
                SDL_Surface *screen;
                SDL_Surface *image;
        SDL_Rect positionscreen;
                SDL_Surface *temp;
                SDL_Surface *zoomimage;
                double newwidth=300;
                double newheight = 300;
        char delay;
        if(SDL_Init(SDL_INIT_VIDEO) !=0){
            printf("Unable to initialize SDL. %s\n",SDL_GetError());
                                               
            return 1;
        }
               
 
 
                screen = SDL_SetVideoMode(800,600,0,SDL_HWSURFACE |SDL_DOUBLEBUF);
                if(screen==NULL){
                                printf("Unable to set video mode : %s \n", SDL_GetError());
                               
                                return 1;
 
                }
 
                temp  = IMG_Load("6.png");
                if (temp ==NULL){
              printf("Unable to load bitmap image : %s \n " , SDL_GetError());
                                return 1;
                }
                image = SDL_DisplayFormat(temp);
    double zoomx = newwidth  / (float)image->w;
    double zoomy = newheight / (float)image->h;

                SDL_FreeSurface(temp);
               
 
                if (image ==NULL){
              printf("Unable to load bitmap image : %s \n " , SDL_GetError());
                                return 1;
                }
               
               
 
                positionscreen.x=0;
                positionscreen.y=0;
                positionscreen.w=400;
                positionscreen.h=400;
               
                SDL_Event event;
                int finishdisplay = 0;
 
                while (!finishdisplay) {
 
                                if (SDL_PollEvent(&event)) {
                                                switch (event.type) {
                                                
						case SDL_QUIT:
                                                               finishdisplay = 1; 
                                                                break;
 
 
                                                case SDL_KEYDOWN:
                                                                switch (event.key.keysym.sym) {
                                                                case SDLK_ESCAPE:
								
                                                                case SDLK_q:
                                                                              finishdisplay = 1;  
                                                                                break;
 
 
                                                                }
                                                                break;
 
                                                }
                                }
                                newwidth=300;
                                newheight=300;              
                                zoomx = newwidth  / (float)image->w;
                                 zoomy = newheight / (float)image->h;
                                zoomimage = zoomSurface(image,zoomx,zoomy,NULL);
                                SDL_BlitSurface(zoomimage, NULL, screen,&positionscreen);
                                SDL_Flip(screen);
                               
                                SDL_Delay(3000);
                               
 
                                SDL_FreeSurface(zoomimage);
                                SDL_FreeSurface(screen); 
                                screen = SDL_SetVideoMode(800,600,0,SDL_HWSURFACE |SDL_DOUBLEBUF);
                               zoomx = newwidth*2  / (float)image->w;
                                zoomy = newheight*2 / (float)image->h;
                                zoomimage = zoomSurface(image,zoomx,zoomy,NULL);
                                SDL_BlitSurface(zoomimage, NULL, screen,&positionscreen);
                                SDL_Flip(screen);
                                SDL_Delay(3000);                            
                                SDL_FreeSurface(zoomimage);
                               
                                SDL_FreeSurface(screen);
                                screen = SDL_SetVideoMode(800,600,0,SDL_HWSURFACE |SDL_DOUBLEBUF);
                               
                }
 
 
 
 
                SDL_FreeSurface(image);
        SDL_FreeSurface(screen); 
 
                //delay= getchar();
                SDL_Quit(); 
                return 0;
 
}


