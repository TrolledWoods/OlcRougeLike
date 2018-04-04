#include <stdio.h>
#include "olcConsoleGameEngine.h"
#include "Map.h"
#include "Game.h"
#include "Entity.h"

wchar_t tileChars[] = { '.', '#', '|', '-' };
short tileColors[] = { FG_DARK_GREY, FG_WHITE, FG_CYAN, FG_CYAN };
bool tileSolid[] = { false, true, false, false };

wchar_t playerChars[] = { 
	'@', 
};
short playerColors[] = { 
	FG_CYAN, };

int viewPortWidth = 30;
int viewPortHeight = 30;
int statsWidth = 10;

class RougeLike : public olcConsoleGameEngine {
public:
	cGame* game;

	RougeLike() {
		game = new cGame(new cMap(15, 15));
	}

	~RougeLike() {
		delete game;
	}

	virtual bool OnUserCreate() {
		return true;
	}

	virtual bool OnUserUpdate(float fElapsedTime) {
		for (int i = 0; i < game->Map->width; i++) {
			for (int j = 0; j < game->Map->height; j++) {
				int tile = game->Map->tileMetas[i + j*game->Map->width].type;
				Draw(i, j, tileChars[tile], tileColors[tile]);
			}
		}

		for (int i = 0; i < game->nEntities; i++) {
			if (game->Entities[i] != nullptr) {
				Draw(game->Entities[i]->px, game->Entities[i]->py, 'z', FG_RED);
			}
		}

		return true;
	}
};

int main() {
	RougeLike game;
	game.ConstructConsole(viewPortWidth + statsWidth + 1, viewPortHeight, 16, 16);
	game.Start();

	return 0;
}