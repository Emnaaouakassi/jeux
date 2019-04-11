prog:main.o perso.o
	gcc main.o perso.o -o prog -lSDL -lSDL_image -SDL_ttf -g
main.o:main.c 
	gcc -c main.c -lSDl -lSDl_image -lSDl_ttf -lSDl_mixer -g
perso.o:perso.c
	gcc -c perso.c -g
