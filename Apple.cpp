#include "Apple.h"
#include "Random.h"
#include "Snake.h"


const int Apple::WIDTH = 15;
const int Apple::HEIGHT = 15;

Apple::Apple(Graphics* graphics) :
	_graphics(graphics)
{
	respawn();
}

void Apple::respawn()
{
	_x = Random::randint(0, _graphics->getWidth() / Snake::BLOCK_WIDTH - 1) * Snake::BLOCK_WIDTH;
	_y = Random::randint(0, _graphics->getHeight() / Snake::BLOCK_HEIGHT - 1) * Snake::BLOCK_HEIGHT;
}

void Apple::render()
{
	_graphics->setDrawColor(255, 0, 0);
	SDL_Rect rect = { _x, _y, WIDTH, HEIGHT };
	_graphics->drawFilledRect(rect);
}