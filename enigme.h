#ifndef ENIGME_H_INCLUDED
#define ENIGME_H_INCLUDED

struct enigme
{
	SDL_Surface *question;
	SDL_Surface *reponse;
	int diff_lvl;
};
typedef struct enigme enigme;

enigme init_engime(char ch[50],char ch0[50],int lvl);

void aff_reponse(SDL_Surface *ecan,enigme E);
void aff_question(SDL_Surface *ecan,enigme E);

#endif