#pragma once

#include "GameBase.h"

class Board: public GameBase
{
public:
	Board();
	Board(int height, int width);

	int getWidth();
	void setWidth(int value);

	int getHeight();
	void setHeight(int value);

	void drawBoard();

	void play();

private:
	int _width;
	int _height;
};