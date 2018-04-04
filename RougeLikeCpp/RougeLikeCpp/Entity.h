#pragma once

class cEntity {
public:
	int px, py;
	int width, height;
	char* graphic;

	cEntity(int px, int py);
	~cEntity();

	virtual void GetMovement(int &x, int &y);
};

class cZombie : public cEntity {
public:
	cZombie(int x, int y);
	~cZombie();

	virtual void GetMovement(int &x, int &y);
};