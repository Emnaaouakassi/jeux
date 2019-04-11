prog:main.o animation.o
	gcc main.o animation.o -o prog -lSDL -lSDL_image -lSDL_ttf -g
main.o:main.c 
	gcc -c main.c -lSDl -lSDl_image -lSDl_ttf -lSDl_mixer -g
animation.o:animation.c
	gcc -c animation.c -g
