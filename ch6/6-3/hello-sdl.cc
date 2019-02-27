#include <SDL.h>
#include <emscripten.h>

SDL_Surface* screen = NULL;

void do_web_frame() {
	SDL_Event event;
	while(SDL_PollEvent(&event)) {
		switch(event.type) {
		case SDL_QUIT:
			break;

		case SDL_MOUSEMOTION:
			printf("mouse(x, y): (%d, %d)\n", event.button.x, event.button.y);
			fflush(stdout);
			break;
		}
	}
}

int main() {
	SDL_Init(SDL_INIT_VIDEO);
	screen = SDL_SetVideoMode(1024, 768, 32, SDL_ANYFORMAT);

	// 在 do_web_frame 中通过 SDL_PollEvent 获取输入消息
	emscripten_set_main_loop(do_web_frame, 0, 0);
	return 0;
}
