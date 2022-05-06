#pragma once
#include "Stickman.h"
#include <vector>
class Controller {
private:
	Stickman* stick;
public:
	Controller(Bitmap^ stickman) {
		stick = new Stickman(stickman->Width/9, stickman->Height/4, 3);
	}

	~Controller(){}

	Stickman* getstick() { return stick; }

	void draweverything(Graphics^ g, Bitmap^ stickman) {
		stick->draw(g, stickman);
		
	}

	//void mostrarrandom() {
	//	for (int i = 0;i < bon.size();i++) {
	//		bon[i]->mostrarcualquiera();
	//	}
	//}

	//void moveeverything(Graphics^ g) {
	//	for (int i = 0;i < fant.size();i++) {
	//		fant[i]->move(g);
	//	}
	//}

};