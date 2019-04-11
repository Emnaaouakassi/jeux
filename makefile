prog:victormain.o victor.o
 gcc victormain.o victor.o -o prog -g -lSDL -lSDL_image -lSDL_mixer -lSDL_ttf
victor.o:victor.c
	gcc -c victor.c -g
victormain.o:victormain.c
	gcc -c victormain.c -g
	
