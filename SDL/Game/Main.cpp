#include <iostream>
#include <SDL.h>
#include <stdio.h>

using namespace std;


int main(int argc, char * argv[])
{
	//if (SDL_Init(SDL_INIT_EVERYTHING) < 0)
	//{
	//	cout << "SDL initialization failed. SDL Error: " << SDL_GetError();
	//}
	//else
	//{
	//	cout << "SDL initialization succeeded!";
	//}

	SDL_Window *window;                    // Declare a pointer
	
	SDL_Init(SDL_INIT_EVERYTHING);              // Initialize SDL2

										   // Create an application window with the following settings:
	window = SDL_CreateWindow(
		"Window",                  // window title
		SDL_WINDOWPOS_UNDEFINED,           // initial x position
		SDL_WINDOWPOS_UNDEFINED,           // initial y position
		640,                               // width, in pixels
		480,                               // height, in pixels
		SDL_WINDOW_RESIZABLE                  // flags - see below
	);

	
	// Check that the window was successfully created
	if (window == NULL) {
		// In the case that the window could not be made...
		cout << "Huston, tenemos un problema " << endl << SDL_GetError() << endl;
		return 1;
	}

	//SDL_SetWindowBordered(window, SDL_FALSE);
	SDL_SetWindowTitle(window, "Chimi");
	int x, y, w, h;
	SDL_Event event;
	bool running = true;

	while (running) {
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT) {
				running = false;
				break;
			}
		
		}
		SDL_GetWindowPosition(window, &x, &y);
		cout << y << " , " << y << endl;
	
	}



	SDL_DestroyWindow(window);
	SDL_Quit();
	return 0;

	cin.get();

	
}