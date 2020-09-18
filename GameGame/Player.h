#pragma once
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Audio.hpp>
#include<SFML/Network.hpp>
#include<Windows.h>

class Player
{
private:
	sf::RectangleShape shap;
	void initV();
	void initShape();

	public:

		Player();
		virtual ~Player();
		void Update();
		void Render(sf::RenderTarget* target);

};

