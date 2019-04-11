
#include <stdio.h>
#include "SDL/SDL.h"
#include "collision.h"
#include "math.h"

int collision_trigo (SDL_Rect personnage,SDL_Rect objet)
{   float D1;
    float D2;
   cercle inscrit;
   cercle objet_inscrit;
   inscrit.X1=personnage.x+personnage.w/2;
   inscrit.Y1=personnage.y+personnage.h/2;
   if (personnage.w<personnage.h)
   {
     inscrit.R=personnage.w/2;
   }
  else
     inscrit.R=personnage.h/2;
   
   objet_inscrit.X1=objet.x+objet.w/2;
   objet_inscrit.Y1=objet.y+objet.h/2;
   if (objet.w<objet.h)
   {
     objet_inscrit.R=objet.w/2;
   }
  else
     objet_inscrit.R=objet.h/2;
   
   D1=sqrt(pow(personnage.X1-objet.X1,2)+pow(personnage.Y1-objet.Y1,2));
   D2=inscrit.R+objet_inscrit.R;
  if (D1!=D2)
  return 0;
  else
  return 1;
   
  
}
