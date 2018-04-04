#pragma once
#include "Map.h"
#include "Entity.h"

class cGame {
public:
	cEntity** Entities;
	int nEntities;

	cMap* Map;

	cGame(cMap* Map);
	~cGame();

	void Update(float fElapsedTime);
	void MoveEntity(cEntity* entity, int dx, int dy);
};