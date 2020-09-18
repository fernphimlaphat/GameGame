#include<stdio.h>
#include "Game.h"



int main()
{

	//sf::Window window(sf::VideoMode(800, 800), "My Game");
	//window.setTitle("Noonnnnnnn 35461331");



	sf::Texture player;
	if (!player.loadFromFile("img/Girl4.png"))
	{
		printf("Load failed");
	}
	 


	//player
	sf::Sprite shapplay;
	shapplay.setTexture(player);

	int X = player.getSize().x / 4;        
	int Y = player.getSize().y / 4;

	shapplay.setTextureRect(sf::IntRect(0, 0, X, Y));

	int frame = 0;

	Game game;
	
	while (game.running()){

		game.Update();
		game.Render();
		/*if(Y > 0 && Y < 1000 )

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
		{
			shapplay.move(-.1f, 0.f);
			shapplay.setTextureRect(sf::IntRect(X * frame, Y *1 , X, Y));

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
		{
			shapplay.move(.1f, 0.f);
			shapplay.setTextureRect(sf::IntRect(X * frame, Y * 2, X, Y));

		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
		{
			shapplay.move(0.f, 1.f);

			shapplay.setTextureRect(sf::IntRect(X * frame, 0, X, Y));


		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
		{
			shapplay.move(0.f, -1.f);
			shapplay.setTextureRect(sf::IntRect(X * frame,Y * 3 ,X, Y));


		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Escape))
		{
			window.close();

		}

		else
		{
			if (Y == 0 || Y == 1000)
			{
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
				{
					shapplay.move(0.f, -1.f);

				}
				if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
				{
					shapplay.move(0.f, 1.f);

					shapplay.setTextureRect(sf::IntRect(X * frame, 0, X, Y));


				}
			}
		}
		Sleep(1.5);

		frame++;

		if (frame >= 3)
		{
			frame = 0;
		}
		


		window.draw(shapplay);
		window.display();
		
		window.clear();*/

	}
		
		
	}



