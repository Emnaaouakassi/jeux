#include <stdio.h>
#include <stdlib.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
#include "bounding.h" 
/*(0-pas de collision   1 collision)*/
int Collision_Bounding_Box (SDL_Rect rec1 ,SDL_Rect position_obstacle,int d) 
{

	int colli =1 ; 
struct rect_collision  rect1,rect2 ; 

rect1.position.x=rec1.x ;
rect1.position.y=rec1.y ;

rect2.position.x=position_obstacle.x ;
rect2.position.y=position_obstacle.y ;
 

rect1.hauteur =48+d; 
rect1.largeur =48+d; 

rect2.hauteur=position_obstacle.h; 
rect2.largeur=position_obstacle.w ; 

if ((rect1.position.y >= rect1.hauteur + rect2.position.y)  ||   (rect1.position.x >= rect1.largeur +rect2.position.x) ||   (rect1.position.y + rect1.hauteur <= rect2.position.y) || (rect1.position.x + rect1.largeur <= rect2.position.x)   )
{
	colli=0 ; 
}

return colli ; 

}
