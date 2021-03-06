#ifndef GAME_H
#define GAME_H

#include "Graphics.h"
#include "Input.h"
#include "Snake.h"


class Game
{
private:
	Input* _input;
	Graphics* _graphics;
	Snake _snake;
	Apple _apple;
	const int _FPS;
	const int _MPF;
private:
	void reset();
public:
	Game(Graphics* graphics, Input* input);
	~Game() { }
	void update();
	void updateInput();
	void render();
};


#endif //GAME_H