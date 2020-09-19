#include<stdio.h>
#include "Game.h"
#include<time.h>


int main()
{
	//srand(time(NULL));
	Game game;

	while (game.getwindow().isOpen()) {

		game.Update();
		game.Render();
		
	}

	}

		
		
	



