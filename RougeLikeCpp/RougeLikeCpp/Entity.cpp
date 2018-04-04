#include "Entity.h"
#include <cstdlib>

cEntity::cEntity(int px, int py) {
	this->px = px;
	this->py = py;
};

cEntity::~cEntity() {

};

void cEntity::GetMovement(int &x, int &y) {
	x = 1;
	y = 0;
};

cZombie::cZombie(int x, int y) : cEntity(x, y) {

};

cZombie::~cZombie() {
};

void cZombie::GetMovement(int &x, int &y) {
	int dir = (int)((rand() / (float)RAND_MAX) * 5);

	x = 0; y = 0;
	switch (dir) {
	case 1:
		x = 1;
		break;
	case 2:
		x = -1;
		break;
	case 3:
		y = 1;
		break;
	case 4:
		y = -1;
		break;
	}
};