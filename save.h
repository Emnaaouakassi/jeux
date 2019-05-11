#ifndef SAVE_H
#define SAVE_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include"SDL/SDL_ttf.h"	

/**
* @struct enrg
* @brief struct for resume and save 
*/
typedef struct save_resume
{
int x_save; /*!< pos player saved . */
int y_save; /*!< pos player saved . */
int a;     /*!< time saved .  */
int a_save;/*!< time saved . */ 
SDL_Rect positionSprite; /*!< pos player. */

}enrg;


void save(char nf[], enrg *rs);
void resume(char nf[],enrg *rs);



#endif