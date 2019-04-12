prog:main.o bounding.o
	gcc main.o bounding.o -o prog -lSDL -lSDL_image -lSDL_ttf -g
main.o:main.c 
	gcc -c main.c -lSDl -lSDl_image -lSDl_ttf -lSDl_mixer -g
bounding.o:bounding.c
	gcc -c bounding.c -g
