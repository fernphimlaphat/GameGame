#include "Player.h"

void Player::initV()
{
}

void Player::initShape()
{
	this->shap.setFillColor(sf::Color::Blue);
	this->shap.setSize(sf::Vector2f(100.f, 50.f));
}

void Player::Texture()
{
	//load file
	sf::Texture player;
	if (!player.loadFromFile("img/Girl4.png"))
	{
		printf("Load failed");
	}
}

void Player::Spite()
{
	//set spite == texture
	this->spite.setTexture(this->texture);
}

Player::Player()
{
	this->Texture();
	this->Spite();

}

Player::~Player()
{
}

void Player::Update()
{
}

void Player::Render(sf::RenderTarget* target)
{
	target->draw(this->shap);
}
