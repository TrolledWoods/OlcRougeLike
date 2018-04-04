#include "Game.h"
#include "Map.h"

cGame::cGame(cMap* map) {
	this->Map = map;
	this->Entities = new cEntity*[2];
	this->nEntities = 2;

	this->Entities[0] = new cZombie(2, 2);
	this->Entities[1] = new cZombie(5, 4);
};

cGame::~cGame() {
	delete this->Map;
};

void cGame::Update(float fElapsedTime) {
	for (int i = 0; i < this->nEntities; i++) {
		
	}
};