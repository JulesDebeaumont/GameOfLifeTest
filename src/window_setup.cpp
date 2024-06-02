#include <SDL2/SDL.h>
#include <game.h> // TODO

#define WINDOWS_WIDTH = 800
#define WINDOWS_HEIGHT = 600

static class WindowSetup
{
public:
    int setup()
    {
        SDL_Init(SDL_INIT_EVERYTHING);
        SDL_Window *window = SDL_CreateWindow("Game of Life", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, WINDOWS_WIDTH, WINDOWS_HEIGHT, SDL_WINDOW_ALLOW_HIGHDPI);

        if (window == NULL)
        {
            std::cout << "Could not create window : " << SDL_GetError() << std::endl;
            return 1
        }

        SDL_Event windowEvent;

        Game.initUi();

        while (true)
        {
            if (SDL_PollEvent(&windowEvent))
            {
                if (windowEvent.type == SDL_QUIT)
                {
                    break;
                }
            }
            Game.run();
        }
        SDL_DestroyWindow(window);
        SQL_Quit();
        return 0;
    }
};
