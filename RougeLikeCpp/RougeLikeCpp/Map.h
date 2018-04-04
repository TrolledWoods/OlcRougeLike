#pragma once
#include <iostream>

// Stores metadata for a tile
class TileMeta {
public:
	int type;

	TileMeta();
};

class cMap {
public:
	TileMeta* tileMetas;
	int width;
	int height;

	cMap(int width, int height);
	~cMap();
};

// Sword;10,FireFly;20