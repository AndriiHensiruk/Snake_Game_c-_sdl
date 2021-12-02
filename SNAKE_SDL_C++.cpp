// SNAKE_SDL_C++.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "Game.h"
#include "Random.h"


const int WIDTH = 640;
const int HEIGHT = 480;
const std::string TITLE = "Snake_SDL_C++";


int main(int, char**)
{
	Graphics* graphics = new Graphics(WIDTH, HEIGHT, TITLE);
	Input* input = new Input;
	Game game(graphics, input);
	while (!input->shouldQuit())
	{
		graphics->clear();
		game.updateInput();
		game.update();
		game.render();
		graphics->update();
		input->update();
	}
	delete graphics;
	return 0;
}