#pragma once
#include<SFML/Graphics.hpp>
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<stdio.h>


//กำหนดให้เดินไม่เกินขอบเขต
enum Player_animation_state{IDLE = 0,Move_left, Move_right, Move_top, Move_down};




class Player
{
private:
	//spitrte
	sf::Sprite sprite1;
	sf::Texture texture1;
	sf::Clock AnimationTime;



	//Animation
	sf::IntRect CurrentFrame;
	short animationState;

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

