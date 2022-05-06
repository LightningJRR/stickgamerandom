#pragma once
#include "Character.h"

class Stickman : public Character {
private:
	int hp;
public:
	Stickman(int width, int height, int hp) :Character(width, height) {
		this->hp = hp;
		x = rand()%300+100;
		y = rand() % 300 + 100;
		dx = dy = 5;
		idx = 0;
	}

	~Stickman(){}

	void bajarvida() { hp--; }
	int gethp() { return hp; }

	void move(Graphics^ g, char i) {
		switch (i)
		{
		case 'A':
			if (x > 0) {
				x -= dx;
				idy = 1;
			}
			break;

		case 'D':
			if (x + width * 1.0 < g->VisibleClipBounds.Width) {
				x += dx;
				idy = 2;
			}
			break;

		case 'W':
			if (y > 0) {
				y -= dy;
				idy = 0;
			}
			break;

		case 'S':
			if (y + height * 1.0 < g->VisibleClipBounds.Height) {
				y += dy;
				idy = 3;
			}
			break;
		}
		idx++;
		if (idx > 8)idx = 0;
	}
};