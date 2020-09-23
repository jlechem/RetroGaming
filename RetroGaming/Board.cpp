#include "Board.h"

Board::Board()
{
	_height = 25;
	_width = 25;

	_name = "Board Game";
	_description = "Play a board game!";
}

Board::Board(int height, int width)
{
	_height = height;
	_width = width;

	_name = "Board Game";
	_description = "Play a board game!";
}

int Board::getWidth()
{
	return _width;
}

void Board::setWidth(int value)
{
	_width = value;
}

int Board::getHeight()
{
	return _height;
}


void Board::setHeight(int value)
{
	_height = value;
}

void Board::drawBoard()
{
	for (auto i = 0; i < _height; i++)
	{
		for (auto j = 0; j < _width; j++)
		{
			// draw the top line
			if (i == 0)
			{
				cout << "-";
			}
			// draw the border lines
			else if (j == 0 || j == _height - 1)
			{
				cout << "|";
			}
			// draw the bottom line
			else if (i == _height - 1)
			{
				cout << "-";
			}
			// draw a filler space
			else
			{
				cout << " ";
			}
		}

		cout << endl;
	}
}

void Board::play()
{
	drawBoard();
}