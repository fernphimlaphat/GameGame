#include "Player.h"

void Player::initV()
{
	this->move = false;
}

void Player::initTexture()
{
	if (!this->texture1.loadFromFile("img/Girl2.png"))
	{
		printf("Not Found");
	}
}

void Player::initSpite()
{
	this->sprite1.setTexture(this->texture1);
	this->CurrentFrame = sf::IntRect(0, 0, 50, 75);

	this->sprite1.setTextureRect(this->CurrentFrame);

	//scale is add or fall width and hight of picture
	this->sprite1.setScale(1.3f, 1.3f);
}

void Player::Animation()
{
	//animation not กระตุก
	this->AnimationTime.restart();
}

Player::Player()
{
	this->initV();
	this->initTexture();
	this->initSpite();
	this->Animation();
}

Player::~Player()
{
}

void Player::updateMove()
{
	this->move = false;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::A))
	{
		//left
		this->sprite1.move(-1.f, 0.f);
		this->move = true;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::D))
	{ 
		//right
		this->sprite1.move(1.f, 0.f);
		this->move = true;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::W))
	{
		//top
		this->sprite1.move(0.f, -1.f);
		this->move = true;
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::S))
	{
		//down
		this->sprite1.move(0.f, 1.f);
		this->move = true;
	}
}

void Player::updateAnimation()
{
	//ออโต้โชว์อนิเมชัน
	if (this->AnimationTime.getElapsedTime().asSeconds() >= 0.5f)
	{
		if (this->move == false)
		{
			this->CurrentFrame.left += 50.f;
			if (CurrentFrame.left >= 150.f)
				CurrentFrame.left = 0;
		}
		this->AnimationTime.restart();
		this->sprite1.setTextureRect(this->CurrentFrame);
	}
}

void Player::update()
{
	this->updateMove();
	this->updateAnimation();
}

void Player::render(sf::RenderTarget& target)
{
	target.draw(this->sprite1);
}
