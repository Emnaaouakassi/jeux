/**
* @file save.c
* @brief Testing Program.
* @author C Team
* @version 0.1
* @date MAY 07, 2019
*
* Testing program for background scrollilng
*
*/


#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SDL/SDL.h"
#include"SDL/SDL_image.h"
#include"SDL/SDL_mixer.h"
#include"SDL/SDL_ttf.h"
#include"save.h"
/**
* @brief To save  positions and time  b .
* @param nf to texte.txt 
* @param rs  the structure  enrg 
* @return Nothing
*/

void save (char nf[], enrg *rs) 
{
	FILE *fich;
	fich = fopen(nf,"w+");
		if(fich!= NULL)
			{
			fprintf(fich,"%d %d %d\n",rs->a ,rs->positionSprite.x,rs->positionSprite.y);
			fclose(fich);
		    }
}

/**
* @brief To resume positions and time  b .
* @param nf to texte.txt 
* @param rs  the structure  enrg 
* @return Nothing
*/
void resume(char nf[],enrg *rs)
{
		FILE *fich;

	fich = fopen(nf,"r+");
if(fich!=NULL)
{	
	fscanf(fich,"%d %d %d\n",&(rs->a_save) , &(rs->x_save) , &(rs->y_save));
	fclose(fich);
}
}
