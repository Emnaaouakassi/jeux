#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include "collision.h" 



int Collisiontrigo(SDL_Rect position,SDL_Rect positioncercle,Circle C)
{
   int xx,yy,xc,yc;
   xx=position.x;
   yy=position.y;
   xc=positioncercle.x;
   yc=positioncercle.y;
   int d2 = (xx-xc)*(xx-xc) + (yy-yc)*(yy-yc);
   //printf("d2%d\n",d2 );
 //printf("c%d\n",C.r*C.r);
   if (d2>C.r*C.r)
//il n'ya pas une collision
      return 0;
   else
// il y'a une collision
      return 1;
}

int Collision_trigonometrique (ennemy victor , SDL_Rect position_peter , int vp)
{
   int xx,yy,xc,yc;
    xx=position.x;
    yy=position.y;
    xc=positioncercle.x;
    yc=positioncercle.y;
    int d2 = (xx-xc)*(xx-xc) + (yy-yc)*(yy-yc);
   if (d2>C.r*C.r)
   victor
