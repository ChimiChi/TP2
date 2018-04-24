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
	SDL_Event event;
	int quit = 0;
	SDL_Init(SDL_INIT_VIDEO);              // Initialize SDL2

										   // Create an application window with the following settings:
	window = SDL_CreateWindow(
		"An SDL2 window",                  // window title
		SDL_WINDOWPOS_UNDEFINED,           // initial x position
		SDL_WINDOWPOS_UNDEFINED,           // initial y position
		640,                               // width, in pixels
		480,                               // height, in pixels
		SDL_WINDOW_OPENGL                  // flags - see below
	);

	
	// Check that the window was successfully created
	if (window == NULL) {
		// In the case that the window could not be made...
		printf("Could not create window: %s\n", SDL_GetError());
		return 1;
	}

	// The window is open: could enter program loop here (see SDL_PollEvent())

		//SDL_Delay(3000);  // Pause execution for 3000 milliseconds, for example

						  // Close and destroy the window
		//SDL_DestroyWindow(window);
	
		// Clean up
		//SDL_Quit();
	while (!quit) {
		//Here the test
		while (SDL_PollEvent(&event)) {
			if (event.type == SDL_QUIT)
				quit = 1;
			else if (event.type == SDL_KEYDOWN)
				printf("Hello\n");
		}
	}

	cin.get();

	return 0;
}