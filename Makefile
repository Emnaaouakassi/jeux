game:*.c
	gcc -g *.c -o game -lSDL -lSDL_ttf -lSDL_image -lSDL_mixer -lSDLmain -I/usr/include/SDL -lm -w
