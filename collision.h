#ifdef COLLISION_H_
#define COLLISION_H_
struct AABB
{
int x;
int y;
int w;
int h;
};typedef struct AABB AABB;
struct cercle
{int X1,Y1;
 int R;
};typedef struct cercle cercle;
int collision (SDL_Rect personnage, AABB objet);
int collision_trigo (SDL_Rect personnage,SDL_Rect objet);

#endif
