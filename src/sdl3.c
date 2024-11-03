#include <SDL3/SDL.h>
#include <SDL3/SDL_main.h> // we use need to use the sdl2 main linking library


int main(int argc, char** argv)
{
    SDL_Window* window = NULL;
    SDL_Renderer* renderer = NULL;

    int result = SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS);
    if (result < 0)
    {
        SDL_Log("Unable to initialize SDL: %s", SDL_GetError());
        return -1;
    }
    window = SDL_CreateWindow("muteboi", 500, 500, 0);
    if (window == NULL)
    {
        SDL_Log("Unable to create window: %s", SDL_GetError());
        return -2;
    }
    #include <SDL3/SDL_render.h> // Include the header file that defines SDL_RENDERER_PRESENTVSYNC

    renderer = SDL_CreateRenderer(window, NULL);
    if (renderer == NULL)
    {
        SDL_Log("Unable to create window: %s", SDL_GetError());
        return -3;
    }

    SDL_Log("msg: SDL3 initialized successfully");

    SDL_Event event;
    int quit = 0;
    while (!quit)
    {
        while (SDL_PollEvent(&event))
        {
            switch (event.type)
            {
                case SDL_EVENT_QUIT:
                    SDL_Log("msg: SDL3 event quit");
                    quit = 1;
                    break;
            }
        }
        SDL_SetRenderDrawColor(renderer, 0, 0, 0xff, 0xff);
        SDL_RenderClear(renderer);
        SDL_RenderPresent(renderer);
        SDL_Delay(1);
    }


    SDL_Log("msg: SDL3 shutdown");
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();
    return 0;
}
