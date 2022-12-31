#include <iostream>
#include <SDL.h>
#include <SDL_image.h>
#include <SDL_ttf.h>
#include <SDL_mixer.h>
#include <glm/glm.hpp>
#include <imgui/imgui.h>
#include <sol/sol.hpp>

int main(int argc, char* argv[]) {
	sol::state lua;
	lua.open_libraries(sol::lib::base);

	glm::vec2 vel = glm::vec2(2, 2);
	SDL_Init(SDL_INIT_EVERYTHING);
	SDL_Log("HI");
	return 0;
}