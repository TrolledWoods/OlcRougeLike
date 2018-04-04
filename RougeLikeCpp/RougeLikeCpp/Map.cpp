#include <iostream>
#include "Map.h"

TileMeta::TileMeta() {
	this->type = 0;
};

cMap::cMap(int width, int height){
	tileMetas = new TileMeta[width * height];

	this->width = width;
	this->height = height;
};

cMap::~cMap() {
	delete [] tileMetas;
};