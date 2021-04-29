
#include <stdlib.h>
#include <stdio.h>

#include <SDL.h>

//gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2

int main(int argc, char **argv){
	
	SDL_version nb;
	SDL_VERSION(&nb);
	
	
	printf("Programme de backup \r\n");
	printf("%d.%d.%d\r\n", nb.major, nb.minor, nb.patch);



	
	system("xcopy c:\\test\\source c:\\test\\dest /E"); 
	
	return EXIT_SUCCESS;
	
}
