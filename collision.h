#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<SDL/SDL.h>
#include<SDL/SDL_image.h>
#include<SDL/SDL_ttf.h>
#ifndef DEF_CONSTANTES
#define DEF_CONSTANTES
typedef struct rect_collision 
{

 int hauteur ; 
int largeur ; 
SDL_Rect position; 

struct Circle
{
 int r;
}typedef Circle;
int Collision_trigonometrique (personage peter , SDL_Rect position_obstacles , int vp);
int Collisiontrigo(SDL_Rect position, SDL_Rect positioncercle, Circle C);
#define LARGEUR_FENETRE 1000
#define HAUTEUR_FENETRE 1000


