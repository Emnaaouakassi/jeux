
#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include "victor.h"
#include <string.h>



ennemy Initialiser_Personnage (ennemy victor)
{
victor.position_ennemy.x=375;
victor.position_ennemy.y=275;
victor.frame.y=49;
victor.frame.x=48;
victor.frame.w=48;
victor.frame.h=48;
victor.affichage_ennemy=NULL;
victor.affichage_ennemy=IMG_Load("victor_demon.png");
victor.speed=0;
victor.activer_defaut=0;
return victor;

}

void Afficher_Personnage (ennemy *victor , SDL_Surface *ecran)
{
	
SDL_BlitSurface(victor->affichage_ennemy , &victor->frame , ecran , &victor->position_ennemy);


}
