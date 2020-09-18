#pragma once
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<stdio.h>

class Player
{
private:
	//spitrte
	sf::Sprite sprite1;
	sf::Texture texture1;
	sf::Clock AnimationTime;

	bool move;

	//Animation
	sf::IntRect CurrentFrame;

	//move


	//core


	void initV(); // variable
	void initTexture();
	void initSpite();
	void Animation();


public:

	Player();
	virtual ~Player();

	//function
	void updateMove();
	void updateAnimation();
	void update();
	void render(sf::RenderTarget& target);

};

